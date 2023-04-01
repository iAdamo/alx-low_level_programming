#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * print_list - function that prints all the elements of a list_t list.
  * @h: head pointer
  * Return: count of nodes
  */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		exit(1);
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
