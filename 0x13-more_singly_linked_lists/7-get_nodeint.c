#include "lists.h"
/**
 * get_nodeint_at_index - search the nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: position in list
 * Return:  returns the nth node of a listint_t linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (0);

	if (head == NULL)
		return (0);

	temp = head;

	while (index > 0)
	{
		temp = temp->next;
		index--;
	}
	node->n = temp->n;
	node->next = NULL;

	return (node);
}
int main(void)
{
    listint_t *head;
    listint_t *node;

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
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node->n);
    print_listint(head);
    free_listint2(&head);
    return (0);
}