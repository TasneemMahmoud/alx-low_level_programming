#include "main.h"

/**
 * main - prints the numbers from 1 to 100
 *		multiples of three print Fizz
 *		multiples of five print Buzz
 *		both three and five print FizzBuzz.
 *		Each number or word should be separated by a space
 * Return: always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
