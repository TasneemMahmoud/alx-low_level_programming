#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 *	beginning of a listint_t list.
 *
 * @head: head
 * @n: node value
 *
 * Return: the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;

	if (*head)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
