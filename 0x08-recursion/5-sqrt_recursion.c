#include "main.h"

int square(int n, int x);

/**
 * _sqrt_recursion -  a function that returnsi
 *	the natural square root of a number.
 *
 * @n: the number
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - a function that calculate square root
 *
 * @n: intger
 * @x: square root
 *
 * Return: intger
 */

int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (square(n, x + 1));
	else
		return (-1);
}

