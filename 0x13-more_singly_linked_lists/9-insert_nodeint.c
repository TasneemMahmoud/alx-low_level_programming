#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new node
 *		at a given position.
 *
 * @head: head
 * @idx: index
 * @n: value
 *
 * Return: the address of the new node, or NULL if it failed,
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newNode = malloc(sizeof(listint_t));
	unsigned int index = 0;

	if (!head || !newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!idx)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	node = *head;
	while (node)
	{
		if (index == idx - 1)
		{
			newNode->next = node->next;
			node->next = newNode;
			return (newNode);
		}
		index++;
		node = node->next;
	}
	free(newNode);
	return (NULL);
}
