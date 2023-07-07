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
	listint_t *temp, *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		temp = *head;

		while (idx > 1)
		{
			temp = temp->next;
			idx--;
		}
		node->next = temp->next;
		temp->next = node;
	}
	return (*head);
}
