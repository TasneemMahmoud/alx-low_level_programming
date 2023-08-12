#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible
 *		combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int fnum = 0, secnum;

	while (fnum < 100)
	{
		secnum = fnum;

		while (secnum < 100)
		{
			if (secnum != fnum)
			{
				putchar((fnum / 10) + 48);
				putchar((fnum % 10) + 48);
				putchar(' ');
				putchar((secnum / 10) + 48);
				putchar((secnum % 10) + 48);

				if (fnum + secnum != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secnum++;
		}
		fnum++;
	}
	putchar('\n');

	return (0);
}
