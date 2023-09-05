#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 *	to a 2 dimensional array of integers.
 * @width: integer
 * @height: integer
 *
 * Return: 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **n, x, y;

	n = malloc(sizeof(*n) * height);

	if (width <= 0 || height <= 0 || n == 0)
		return (NULL);

	else
	{
		for (x = 0; x < height; x++)
		{
			n[x] = malloc(sizeof(**n) * width);
			if (n[x] == 0)
			{
				while (x--)
					free(n[x]);
				free(n);
				return (NULL);
			}
			for (y = 0; y < width; y++)
				n[x][y] = 0;
		}
	}
	return (n);
}
