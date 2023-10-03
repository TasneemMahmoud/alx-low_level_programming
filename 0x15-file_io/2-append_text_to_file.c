#include "main.h"

/**
 * _strlen - function that returns the lenth of string.
 *
 * @s: the string
 *
 * Return: string lenth.
 */

int _strlen(char *s)
{
	int l = 0;

	if (!s)
		return (0);

	while (*s++)
		l++;
	return (l);
}

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	ssize_t b = 0, lenth = _strlen(text_content);

	if (!filename)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (lenth)
		b = write(op, text_content, lenth);
	close(op);
	return (b == lenth ? 1 : -1);
}

