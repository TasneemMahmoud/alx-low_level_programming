#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings, followed by a new line.
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	char *str;
	va_list s;

	va_start(s, n);
	c = 0;
	while (c < n)
	{
		str = va_arg(s, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (c != (n - 1) && separator != NULL)
			printf("%s", separator);
		c++;
	}
	printf("\n");
	va_end(s);
}

