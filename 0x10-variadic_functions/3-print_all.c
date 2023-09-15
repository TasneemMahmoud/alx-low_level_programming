#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 *
 * @format: a list of types of arguments passed to the function
 * @...: number of args
 */

void print_all(const char * const format, ...)
{
	int d = 0;
	char *str, *sp = "";
	va_list a;

	va_start(a, format);
	if (format)
	{
		while (format[d])
		{
			switch (format[d])
			{
				case 'c':
					printf("%s%c", sp, va_arg(a, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(a, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(a, double));
					break;
				case 's':
					str = va_arg(a, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					d++;
					continue;
			}
			sp = ", ";
			d++;
		}
	}
	printf("\n");
	va_end(a);
}
