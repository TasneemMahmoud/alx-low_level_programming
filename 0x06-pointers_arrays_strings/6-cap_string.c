#include "main.h"
#include <stdio.h>

/**
 * islower - spacific if char is lower
 *
 * @ch: character
 *
 * Return: 1 if true, 0 if false
 */

int islower(char ch)
{
	return (ch >= 97 && ch <= 122);
}

/**
 * isdelimiter - Separators of words
 *
 *@ch: character
 *
 * Return: 1 if true, 0 if false
 */

int isdelimiter(char ch)
{
	int i;
	char delimiter[] = " \t\n,.!?\'(){}";

	for (i = 0; i < 12; i++)
		if (ch == delimiter[i])
			return (1);
}

/**
 * cap_string -  function that capitalizes all words of a string.
 *
 * @s: Acapitalized string
 *
 * Return: Achanged string in pointer
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int founddelimiter = 1;

	while (*s)
	{
		if (isdelimiter(*s))
			founddelimiter = 1;
		else if (islower(*s) && founddelimiter)
		{
			*s -= 32;
			founddelimiter = 0;
		}
		else
			founddelimiter = 0;
		s++;
	}
	return (ptr);
}
