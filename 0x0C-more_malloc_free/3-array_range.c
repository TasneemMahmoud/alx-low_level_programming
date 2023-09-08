#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 *
 * @min: smallest int
 * @max: geatest int
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int n, x;
	int *p;

	if (min < max)
		return (NULL);

	n = max - min + 1;
	p = malloc(sizeof(int) * n);

	if (p == NULL)
		return (NULL);

	x = 0;
	while (x < n)
	{
		x++;
		p[x] = min++;
	}
	return (p);
}
