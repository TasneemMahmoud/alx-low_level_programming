#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - unction that frees a 2 dimensional grid
 *	previously created by your alloc_grid function.
 *
 * @grid: grid
 * @height: integer
 *
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}
