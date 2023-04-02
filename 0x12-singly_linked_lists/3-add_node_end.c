#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * add_node_end - function that adds a new node at the end of a list_t list.
  * @head: head pointer
  * @str: Data
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (*head);
}
