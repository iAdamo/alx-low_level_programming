#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to head node
 * Return: returns nnumber of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t node_count;

	if (h == NULL)
		return (0);

	temp = h;

	node_count = 0;
	while (temp)
	{
		printf("%d\n", temp->n);
		node_count++;
		temp = temp->next;
	}

	return (node_count);
}
