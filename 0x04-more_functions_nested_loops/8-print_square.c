#include "main.h"

/**
 * print_square -  prints a square - use _putchar
 *
 * @size:  the size of the square
 *
 * Return: always 0 (success)
*/

void print_square(int size)
{
	int row, colum;

	if (size < 1)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (colum = 0; colum < size; colum++)
			_putchar(35);
		_putchar('\n');
	}
}
