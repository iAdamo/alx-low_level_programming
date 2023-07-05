#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to head pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp1;

	if (*head != NULL)
		temp = *head;

	temp1 = temp;

	while (temp1)
	{
		temp1 = temp1->next;
		free(temp);
		temp = temp1;
	}
	*head = NULL;
}
