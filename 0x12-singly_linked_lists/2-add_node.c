#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * add_node - function that adds a new node at the beginning of a list_t list
  * @head: pointer to first
  * @str: String to new node
  * Return: Return the address of the new element, or NULL if failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next =  NULL;

	new->next = *head;
	*head = new;

	if (*head != NULL)
	{
		return (*head);
	}
	else
	{
		return (NULL);
	}
}
