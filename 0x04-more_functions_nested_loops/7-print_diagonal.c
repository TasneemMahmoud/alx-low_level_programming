#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *		only use _putchar function
 * @n: the number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int pos, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pos = 0; pos < n; pos++)
		{
			for (space = 0; space < n; space++)
			{
			if (pos == space)
				_putchar(92);
			else if (space < pos)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
