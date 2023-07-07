#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to the first node poinnter
 * @index: position index
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;

	temp = *head;
	temp2 = *head;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (index + 1 > 1)
	{
		temp2 = temp;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		index--;
	}
	temp2->next = temp->next;
	temp->next = NULL;
	free(temp);
	temp = NULL;

	return (1);
}
