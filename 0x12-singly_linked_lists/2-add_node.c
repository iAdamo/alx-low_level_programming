#include "lists.h"
/**
 * add_node - function that add a node to the begginning of a list
 * @head: The head pointer
 * @str: string
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (str == NULL)
		return (0);

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (0);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		node->next = *head;
		*head = node;
	}

	return (*head);
}
