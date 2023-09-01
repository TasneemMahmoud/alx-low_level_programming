#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: the result of comparing
*/

int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			n = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (n);
}
