#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: pointer to the address of the first node
 * @idx: index position to add node
 * @n: node data
 * Return: a new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp;

	if (*h == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	temp = *h;
	idx -= 1;
	while (idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	temp->next->prev = node;
	node->prev = temp;
	node->next = temp->next;
	temp->next = node;

	return (*h);
}
