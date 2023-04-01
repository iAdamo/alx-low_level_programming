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
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next =  NULL;

	ptr->next = *head;
	*head = ptr;
	if (*head != NULL)
	{
		return (*head);
	}
	else
	{
		return (NULL);
	}
}
