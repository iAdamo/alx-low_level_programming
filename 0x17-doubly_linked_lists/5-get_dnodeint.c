#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to the first node
 * @index: index of the node, startin from 0
 * Return: returns the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	while (index--)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	return (temp);
}
