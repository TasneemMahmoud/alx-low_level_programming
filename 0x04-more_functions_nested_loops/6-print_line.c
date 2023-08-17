#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 *		only use _putchar function
 * @n: the number of times the character _ should be printed
*/

void print_line(int n)
{
	int lch;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lch = 1; lch <= n; lch++)
			_putchar('_');
		_putchar('\n');
	}
}
