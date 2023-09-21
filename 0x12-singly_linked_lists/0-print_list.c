#include "lists.h"

/**
 * _strlen - func that returns the lenth of string
 *
 * @s: string
 *
 * Return: lenth of string
 */

int _strlen(char *s)
{
	int n;

	if (!s)
		return (0);
	while (*s++)
		n++;
	return (n);
}

/**
 * print_list -  function that prints all the elements of a list_t list.
 *
 * @h: pointer
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
