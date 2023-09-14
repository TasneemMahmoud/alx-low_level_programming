#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *	on each element of an array.
 *
 * @array: int array
 * @size: the size of array
 * @action: pointer of function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *le = array + size - 1;

	if (array && size && action)
		while (array <= le)
			action(*array++);
}
