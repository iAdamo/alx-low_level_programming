#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: pointer to pointer of the first node
 * @idx: index position
 * @n: value data to node
 * Return: address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		temp = *head;

		while (idx > 1)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
			idx--;
		}
		node->next = temp->next;
		temp->next = node;
	}
	return (*head);
}
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 15, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}