#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	const unsigned char *keys;

	if (ht == NULL || key == NULL)
		return (NULL);

	keys = (const unsigned char *)key;

	index = key_index(keys, ht->size);

	if (ht->array[index])
		return (ht->array[index]->value);
	return (NULL);
}
