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

	if (!head || !newHead)
		return (NULL);

	if (str)
	{
		newHead->str = strdup(str);
		if (newHead->str)
		{
			free(newHead);
			return (NULL);
		}
		newHead->len = _strlen(newHead->str);
	}
	newHead->next = *head;
	*head = newHead;
	return (newHead);
}
