#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9
 *		dont print 2 and 4
 *		can only use _putchar
 * Return: always 0 (success)
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
