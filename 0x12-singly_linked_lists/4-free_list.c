#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * free_list -  function that frees a list_t list.
  * @head: head list
  */
void free_list(list_t *head)
{
	free(head);
}
