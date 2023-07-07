#include "lists.h"
/**
 * get_nodeint_at_index - search the nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: position in list
 * Return:  returns the nth node of a listint_t linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}

	return (NULL);
}
