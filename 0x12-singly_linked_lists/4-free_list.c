#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer to first node
*/
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
