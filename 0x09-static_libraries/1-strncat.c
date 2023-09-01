#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 *
 * @dest: pointeer input
 * @src:  pointeer input
 * @n: most n bytes from src
 *
 * Return:  a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int l, i;

	l = 0;

	while (dest[l])
		l++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';

	return (dest);
}
