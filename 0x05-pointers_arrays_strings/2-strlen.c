#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s : input str
 *
 * Return: the length of a string.
*/

int _strlen(char *s)
{
	int len:

	for (len = 0; *s != '\0'; s++)
		++len;

	return (len);
}
