#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *		both lowercase or uppercase
 *
 * @c: takes input from other function
 *
 * Return: return 1 is 'c' if true else 0
 *
*/

int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
