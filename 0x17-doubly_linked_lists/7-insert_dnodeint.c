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
	dlistint_t *node = NULL, *temp = NULL;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (h == NULL || (*h) == NULL)
		*h = node;
	else
	{
		temp = *h;
		while (idx != i++ && temp->next)
			temp = temp->next;
		if (temp->next)
			node->prev = temp->prev;
		else
			node->prev = temp;
		if (idx == i)
			temp->next = node, node->prev = temp;
		else if (idx == i - 1)
		{
			if (temp->prev)
				temp->prev->next = node;
			else
				*h = node;
			temp->prev = node;
			node->next = temp;
		}
		else
		{
			free(node);
			return (NULL);
		}
	}
	return (node);
}
