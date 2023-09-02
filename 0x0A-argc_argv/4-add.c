#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main -  program that adds positive numbers.
 *
 * @argc: arguments
 * @argv: pointer array
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int res = 0;
	char *s;

	while (--argc)
	{
		for (s = argv[argc]; *s; s++)
			if (*s < '0' || *s > '9')
			{
				printf("Error\n");
				return (1);
			}
		res += atoi(argv[argc]);
	}
	printf("%d\n", res);
	return (0);
}
