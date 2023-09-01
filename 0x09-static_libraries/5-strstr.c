#include "main.h"

/**
 * _strstr -  a function that locates a substring.
 *
 * @haystack: the string
 * @needle: the substring
 *
 * Return: pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *s = haystack;
		char *s1 = needle;

		haystack++;

		while (*s == *s1 && *s1 != '\0')
		{
			s++;
			s1++;
		}
		if (*s1 == '\0')
			return (haystack);
	}
	return (0);
}
