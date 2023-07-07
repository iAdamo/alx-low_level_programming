#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: pointer to pointer of the first node
 * @idx: index position
 * @n: value data to node
 * Return: address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *temp2, *node;

	if (*head == NULL)
		return (0);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (0);
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else if ((*head)->next == NULL)
	{
		(*head)->next = node;
	}
	else
	{
		temp = *head;
		temp2 = *head;

		while (idx > 0)
		{
			temp2 = temp;
			temp = temp->next;
			if (temp->next == NULL)
			{
				return (0);
			}
			idx--;
		}
		node->next = temp;
		temp2->next = node;
	}
	return (*head);
}
