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
	unsigned int len = 0;

	while (str[len])
		len++;

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (node->next)
		node = node->next;
	node->next = newNode;
	return (newNode);
}
