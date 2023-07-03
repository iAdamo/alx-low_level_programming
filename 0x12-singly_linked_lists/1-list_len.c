#include "lists.h"
/**
 * list_len - function to get the number of elements in a linked list
 * @h: pointer to reference
 * Return:  number of elements in a linked list_t list
*/
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count_elem = 0;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp)
	{
		count_elem++;
		temp = temp->next;
	}
	return (count_elem);
}
