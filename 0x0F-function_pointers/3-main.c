#include "3-calc.h"

/**
 * main - function
 * @argc: int
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1];
	b = atoi(argv[3];

	op_func = get_op_func(argv[2]);
	if (*op_func == NULL)
	{
	printf("Error\n");
		exit(99);
	}
	if ((*op_func == '/' && b == 0)
		(*op_func == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(a, b));
	return (0);
}
