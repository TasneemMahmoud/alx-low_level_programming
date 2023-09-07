#include "main.h"

/**
 * *_calloc -  function that allocates memory for an array.
 *
 * @nmemb: len of aray
 * @size: size of element
 *
 * Return:  a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int x = 0, y = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = nmemb * size;
	p = malloc(x);

	if (p == NULL)
		return (NULL);

	while (y < x)
	{
		p[y] = 0;
		y++;
	}
	return (p);
}

