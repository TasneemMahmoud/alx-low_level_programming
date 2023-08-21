#include "main.h"

/**
 * _puts -  a function that prints a string, followed by a new line
 * @str: a string to print
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
