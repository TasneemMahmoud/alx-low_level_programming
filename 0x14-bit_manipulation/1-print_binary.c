#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int s = sizeof(n) * 8, num = 0;

	while (s)
	{
		if (n & 1L << --s)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
