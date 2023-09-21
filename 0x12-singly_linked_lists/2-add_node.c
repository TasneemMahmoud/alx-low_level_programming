#include "lists.h"

/**
 * add_node -  function that adds a new node at the beginning of a list_t list.
 *
 * @head: pointer
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
		len++;

	if (!newHead)
		return (NULL);

	newHead->str = strdup(str);
	newHead->len = len;
	newHead->next = *head;
	*head = newHead;

	if (!head || !newHead)
		return (NULL);

	return (newHead);
}
