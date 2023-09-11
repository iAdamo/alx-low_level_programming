#include "hash_tables.h"
/**
 * hash_table_delete - Remove a hash table.
 * @ht: The pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int j;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			node = ht->array[j];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
