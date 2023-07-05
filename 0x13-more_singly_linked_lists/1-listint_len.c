#include "lists.h"
/**
 * listint_len - print the number of element
 * @h: pointer to the first node
 * Return: returns the number of elements in a linked listint_t list
*/
size_t listint_len(const listint_t *h)
{
	size_t node_count;
	const listint_t *temp;

	if (h == NULL)
		exit(0);

	temp = h;

	node_count = 0;
	while (temp)
	{
		node_count++;
		temp = temp->next;
	}

	return (node_count);
}
