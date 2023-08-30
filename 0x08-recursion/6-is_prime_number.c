#include "main.h"

int if_prime(int n, int y);

/**
 * is_prime_number -  function that returns 1 if the input integer
 *		is a prime number otherwise return 0
 *
 * @n : number
 *
 * Return: 1 if the input integer is a prime number
 *	is a prime number otherwise return 0
 */

int is_prime_number(int n)
{
	return (if_prime(n, 2));
}

/**
 * if_prime - function that checks prime numbers
 *
 * @n: number
 * @y: number to check
 *
 * Return: The number
 */

int if_prime(int n, int y)
{
	if (y >= n && n > 1)
		return (1);
	else if (n % y == 0 || n <= 1)
		return (0);
	else
		return (if_prime(n, y + 1));
}
