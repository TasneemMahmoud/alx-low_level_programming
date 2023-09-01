#include "main.h"

/**
 * _islower - unction that checks for lowercase character
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is lowercase
 *	otherwise always 0 (success)
 *
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
