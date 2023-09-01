#include"main.h"

/**
 * _atoi - a function that convert a string to an integer.
 *
 * @s: string
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int g = 1;

	do {
		if (*s == '-')
			g *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * g);
}