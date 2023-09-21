#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 *
 * @head: pointer
 * @str: string
 *
 * Return:  the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = *head;
	list_t *newNode = malloc(sizeof(list_t));

	if (!head || !newNode)
		return (NULL);
	if (str)
	{
		newNode->str = strdup(str);
		if (!newNode->str)
		{
		free(newNode);
			return (NULL);
		}
		newNode->len = _strlen(newNode->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = newNode;
	}
	else
		*head = newNode;
	return (newNode);
}
