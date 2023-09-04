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
	int x, y = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	s = malloc(sizeof(char) * (x + 1));

	if (s == NULL)
		return (NULL);

	y = 0;
	while (str[y] != '\0')
	{
		y++;
		s[y] = str[y];
	}
	return (s);
}
