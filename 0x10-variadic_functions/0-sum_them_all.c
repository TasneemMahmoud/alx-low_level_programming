#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: number of arg
 * @...: arg
 *
 * Return:  the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int c = n, sum = 0;
	va_list a;

	if (n <= 0)
		return (0);
	va_start(a, n);
	while (c--)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
