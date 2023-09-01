#include "main.h"
#include<stdio.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: number
 * @argv: array
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}

	return (0);
}
