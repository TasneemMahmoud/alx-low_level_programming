#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers
 * @n: number of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list a;

	va_start(a, n);
	c = 0;
	while (c < n)
	{
		printf("%d", va_arg(a, int));
		if (c != (n - 1) && separator != NULL)
			printf("%s", separator);
		c++;
	}
	printf("\n");
	va_end(a);
}

