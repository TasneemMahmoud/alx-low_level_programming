#include "main.h"
#include<stdio.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: argument commadline
 * @argv:pointer array
 *
 * Return: 0-success, 1-fail
 */

int main(int argc, char **argv)
{
	int res;

	if (argc == 3)
	{
		res = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
