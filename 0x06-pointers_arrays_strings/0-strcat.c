#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: pointer input
 * @src: pointer input
 *
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int n, i;

	for (n = 0; dest[n]; n++)

		for (i = 0; src[i]; i++)
		{
			dest[n] = src[i];
			n++;
		}
	return (dest);
}

