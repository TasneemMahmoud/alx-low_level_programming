#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: command arguments
 * @argv: array pointer
 *
 * Return: Always return 0 (success)
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
