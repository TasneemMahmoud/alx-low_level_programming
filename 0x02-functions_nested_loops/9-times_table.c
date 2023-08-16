#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Example table
 * 0,  0,  0,..
 * 0,  1,  2,..
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num < 10; num++)
	{
		_putchar(48);
		for (mult = 1; min < 10; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod < 10)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
