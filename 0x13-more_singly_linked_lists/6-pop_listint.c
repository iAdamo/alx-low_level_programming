#include "lists.h"
/**
  * pop_listint - that deletes the head node of a listint_t linked list
  * @head: pointer to headr pointer
  * Return: returns the head node’s data (value)
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	temp = *head;
	(*head) = (*head)->next;
	free(temp);
	temp = NULL;

	return (value);
}
