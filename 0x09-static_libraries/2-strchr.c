#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 *
 * @s: the string
 * @c: constant
 *
 * Return:  pointer to the first occurrence of the character c in the string s
*/

char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; s[l] >= '\0'; l++)
	{
		if (s[l] == c)

			return (s + l);
	}
	return ('\0');
}
