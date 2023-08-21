#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * in odd case n = (length_of_the_string - 1) / 2
 *
 * @str: string array
*/

void puts_half(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)

	l++;
	for (l /= 2; str[l] != '\0'; l++)
	{
		putchar(str[l]);
	}
	putchar('\n');
}
