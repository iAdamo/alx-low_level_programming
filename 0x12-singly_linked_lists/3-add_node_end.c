#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the first node
 * @str: string pointer
 * Return:  the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;

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
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
	return (*head);
}
