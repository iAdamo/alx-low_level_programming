#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (0);
	node->n = n;
	node->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = node;
	}

	return (*head);
}
