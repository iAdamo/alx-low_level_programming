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

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		if (*h == NULL)
			*h = node;
		else
		{
			node->next = *h;
			(*h)->prev = node;
			*h = node;
		}
		return (*h);
	}
	temp = *h;
	while (idx > 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp->next == NULL)
	{
		temp->next = node;
		node->prev = temp;
		return (*h);
	}
	if (temp == NULL)
		return (*h);

	temp->next->prev = node;
	node->prev = temp;
	node->next = temp->next;
	temp->next = node;

	return (*h);
}
