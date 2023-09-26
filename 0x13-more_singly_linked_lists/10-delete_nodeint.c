#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 *	at index index of a listint_t linked list.
 *
 * @head: head
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *lNode;
	unsigned int n;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (n == index)
		{
			lNode->next = node->next;
			free(node);
			return (1);
		}
		n++;
		lNode = node;
		node = node->next;
	}
	return (-1);
}
