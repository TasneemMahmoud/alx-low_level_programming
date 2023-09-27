#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _realloc - function that reallocate memory.
 *
 * @l: list
 * @s: size
 * @n: new node
 *
 * Return: pointer to the new list
 */

const listint_t **_realloc(const listint_t **l, size_t s, const listint_t *n)
{
	const listint_t **nlist;
	size_t i;

	nlist = malloc(s * sizeof(listint_t *));
	if (nlist == NULL)
	{
		free(l);
		exit(98);
	}
	i = 0;
	while (i < s - 1)
	{
		nlist[i] = l[i];
		i++;
	}
	nlist[i] = n;
	free(l);
	return (nlist);
}

/**
 * print_listint_safe - function that prints a listint_t linked list.
 *
 * @head: head
 *
 * Return:the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _realloc(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
