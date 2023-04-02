#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * free_list -  function that frees a list_t list.
  * @head: head list
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
