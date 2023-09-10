#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key can not be an empty string
 * @value: pointer to the value associated with the key.
 *
 * Description: value must be duplicated. value can be an empty string.
 * In case of collision, add the new node at the beginning of the list
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node;
	hash_node_t *node;
	const unsigned char *keys;
	char *values;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	values = (char *)value;
	keys = (const unsigned char *)key;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(values);
	node->next = NULL;

	index = key_index(keys, ht->size);
	current_node = ht->array[index];

	if (index >= ht->size)
		return (0);
	if (current_node == NULL)
		ht->array[index] = node;
	else if (strcmp(current_node->key, key) == 0)
		ht->array[index]->value = values;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
