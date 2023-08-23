#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @ch: string
 *
 * Return: string that encodes
 */

char *leet(char *ch)
{
	char *c = ch;
	char s[] = {'A', 'E', 'O', 'T', 'L'};
	int n[] = {4, 3, 0, 7, 1};
	unsigned int x;

	while (*ch)
	{
		for (x = 0; x < sizeof(s) / sizeof(char); x++)
		{
			if (*ch == s[x] || *ch == s[x] + 32)
			{
				*ch = 48 + n[x];
			}
		}
		ch++;
	}
	return (c);
}
