#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: head
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *newNode;

	if (!head)
		return;

	node  = *head;
	while (node)
	{
		newNode = node;
		node = node->next;
		free(newNode);
	}
	*head = NULL;
}

