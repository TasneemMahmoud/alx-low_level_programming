#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string
 * @s2: string
 *
 * Return: concat of s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	c = malloc(sizeof(char) * (x + y + 1));

	if (c == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		c[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		c[x] = s2[y];
		x++, y++;
	}
	c[x] = '\0';
	return (c);
}

