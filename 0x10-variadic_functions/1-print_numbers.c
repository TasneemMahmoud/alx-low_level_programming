#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers
 * @n: number of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int c = n;
	va_list a;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(a, n);
	while (--c)
	{
		printf("%d", va_arg(a, int));
		if (!c && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}

