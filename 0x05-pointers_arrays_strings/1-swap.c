#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: input int 1
 * @b: input int 2
*/

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
