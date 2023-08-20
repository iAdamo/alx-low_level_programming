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
	dlistint_t *node, *len, *temp = *h;
	size_t count = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	len = *h;
	while (len->next)
	{
		count++;
		len = len->next;
	}
	if (idx > (count + 1))
		return (*h);
	if (idx == count + 1)
	{
		len->next = node;
		node->prev = len;
		return (*h);
	}
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
	idx = idx + 1;
	while (idx--)
		temp = temp->next;
	temp->next->prev = node;
	node->prev = temp;
	node->next = temp->next;
	temp->next = node;
	return (*h);
}
