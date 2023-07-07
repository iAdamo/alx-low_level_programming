#include "lists.h"
/**
 * get_nodeint_at_index - search the nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: position in list
 * Return:  returns the nth node of a listint_t linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	listint_t *node;

	if (head == NULL)
		return (0);

	temp = head;

	while (index > 0)
	{
		temp = temp->next;
		index--;
	}
	node = temp;


	return (node);
}
