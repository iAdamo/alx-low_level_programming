#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at
 * the end of a dlistint_t list.
 * @head: pointer to the address of first node
 * @n: integer
 * Return: a new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *temp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (*head == NULL)
		*head = node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = node;
		node->prev = temp;
	}
	return (*head);
}
