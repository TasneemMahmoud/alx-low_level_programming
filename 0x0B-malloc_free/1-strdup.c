#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: always 0 (success)
 */

char *_strdup(char *str)
{
	int x = 0, y = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[y] != '\0')
		y++;

	s = malloc(y * sizeof(*str) + 1);

	if (s == 0)
		return (NULL);

	else
	{
		while (x < y)
		{
			y++;
			s[x] = str[x];
		}
	}
	return (s);
}
