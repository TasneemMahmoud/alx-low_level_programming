#include "main.h"

/**
 * print_diagsums -  function that prints the sum of the two diagonals
 *		of a square matrix of integers
 * @a: int array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int x;
	int y = 0;
	int z = 0;

	for (x = 0; x < size; x++)
	{
		y += a[x];
		z += a[size - x - 1];
		a += size;
	}
	printf("%d, ", y);
	printf("%d\n", z);
}



