#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 *
 * @b: integer
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
