#include <stdio.h>
#include "main.h"

/**
 * main -  program that prints all arguments it receives
 *
 * @argc: argument counter
 * @argv: arguments array
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
