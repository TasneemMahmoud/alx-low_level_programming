#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *		can only use _putchar function to print
 *
 * @size: the size of the triangle
 *
 * Return: always 0 (success)
*/

void print_triangle(int size)
{
	int w, h;

	if (size <= 0)
		_putchar('\n');
	for (w = 1; w <= size; w++)
	{
		for (h = 1; h <= size; h++)
		{
			if ((w + h) <= size)
				_putchar(' ');
			else
				_putchar(35);
		}
		_putchar('\n');
	}
}

