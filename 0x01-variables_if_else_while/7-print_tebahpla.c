#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the lowercase alphabet in reverse,
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'Z';

	while (ch < 'z')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
