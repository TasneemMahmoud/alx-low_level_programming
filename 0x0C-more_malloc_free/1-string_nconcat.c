#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 *
 * @s1: string
 * @s2: string
 * @n: bytes
 *
 * Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int x, y, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	string = malloc(len1 + n + 1);
	if (string == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		string[x] = s1[x];

	for (y = 0; y < n; y++)
	{
		string[x] = s2[y];
		x++;
	}
	string[x] = '\0';
	return (string);
}
