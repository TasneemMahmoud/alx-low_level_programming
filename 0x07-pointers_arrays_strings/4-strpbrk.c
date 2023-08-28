#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s:  the string
 * @accept:  the string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *p;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
		}
	}
	return (0);
}
