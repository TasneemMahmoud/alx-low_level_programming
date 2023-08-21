#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 *
 * @s: input string
 *
 * Return:  reversed string
*/

void rev_string(char *s)
{
	char r = s[0];
	int c = 0;
	int n;

	while (s[c] != '\0')
		c++;
	for (n = 0; n < c; n++)
	{
		c--;
		r = s[n];
		s[n] = s[c];
		s[c] = r;
	}
}
