#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: head
 *
 * Return:  the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
