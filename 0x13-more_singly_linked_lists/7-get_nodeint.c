#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 *	of a listint_t linked list.
 *
 * @head: head
 * @index: index
 *
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int num;

	node = head, num = 0;
	while (node && num < index)
	{
		node = node->next;
		num++;
	}
	return (node);
}
