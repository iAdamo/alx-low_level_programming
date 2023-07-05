#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to head
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
