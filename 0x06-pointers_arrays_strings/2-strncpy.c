#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: pointeer input
 * @src: pointer input
 * @n: number of bytes
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && src[l] != '\0'; l++)
		dest[l] = src[l];

	while (l < n)
		dest[l] = '\0';
		l++;

	return (dest);
}
