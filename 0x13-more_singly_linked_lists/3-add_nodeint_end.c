#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node
 *	at the end of a listint_t list.
 *
 * @head: head
 * @n: new node
 *
 * Return: the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;

	if (!*head)
		*head = newNode;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = newNode;
	}
	return (newNode);
}
