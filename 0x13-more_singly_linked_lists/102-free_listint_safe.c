#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop_f1 - function that finds a loop in linked list
 *
 * @head: head
 *
 * Return: address of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *e;

	if (head == NULL)
		return (NULL);

	for (e = head->next; e != NULL; e = e->next)
	{
		if (e == e->next)
			return (e);
		for (p = head; p != e; p = p->next)
			if (p == e->next)
				return (e->next);
	}
	return (NULL);
}

/**
 * free_listint_safe -  function that frees a listint_t list.
 *
 * @h: head
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node, lnode;
	size_t len;
	int l = 1;

	if (h == NULL || *h == NULL)
		return (0);

	lnode = find_listint_loop_f1(listint_t *h);
	for (len = 0; (*h != lnode || l) && *h != NULL; *h = node)
	{
		len++;
		node = (*h)->next;
		if (*h == lnode && l)
		{
			if (lnode == lnode->next)
			{
				free(*h);
				break;
			}
			len++;
			node = node->next;
			free((*h)->next);
			l = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
