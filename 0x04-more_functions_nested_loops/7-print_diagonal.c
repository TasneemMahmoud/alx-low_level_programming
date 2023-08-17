#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *		only use _putchar function
 * @n: the number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int ps, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ps = 1; ps <= n; ps++)
		{
			for (sp = 1; sp <= sp; sp++)
				_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
	}
}
