#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 *
 * @s: the string pointer
*/

void print_rev(char *s)
{
	int len = 0;
	int a;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (a = len; a > 0; a--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
