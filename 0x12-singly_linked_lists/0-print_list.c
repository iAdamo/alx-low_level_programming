#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the first node
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t node_count = 1;
	const list_t *temp;

	temp = h;

	if (h == NULL)
		return (0);

	while (temp->next)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		node_count++;
	}
	printf("[%d] %s\n", temp->len, temp->str);
	return (node_count);
}
