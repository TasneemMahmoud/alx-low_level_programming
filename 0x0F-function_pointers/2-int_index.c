#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: int array
 * @size:  the number of elements in the array
 * @cmp:the function to be used to compare values
 * Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array && size && cmp)
		while (index < size)
		{
			if (cmp(array[index]))
				return (index);
			index++;
		}
	return (-1);
}
