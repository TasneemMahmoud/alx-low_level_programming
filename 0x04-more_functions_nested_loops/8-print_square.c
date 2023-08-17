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

		for (row = 1; row <= size; row++)
		{
			for (colum = 1; colum <= size; colum++)
				_putchar('#');
			_putchar('\n');
		}
}
