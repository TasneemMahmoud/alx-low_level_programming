#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 *		of a string to uppercase.
 *
 * @s: string
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 97 && s[x] <= 122)
		{
			s[x] = s[x] - 32;
		}
	}
	return (s);
}
