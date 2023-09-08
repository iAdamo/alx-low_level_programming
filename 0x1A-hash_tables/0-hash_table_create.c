#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: is the size of the array
 *
 * If something went wrong, your function should return NULL
 *
 * Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(sizeof(hash_node_t *), table->size);
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
