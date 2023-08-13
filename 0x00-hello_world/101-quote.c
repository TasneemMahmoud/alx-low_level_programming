#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Write a C program that
 *		prints with write function
 *
 * Return: 1 (error)
*/

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, quote, 59);

	return (1);
}
