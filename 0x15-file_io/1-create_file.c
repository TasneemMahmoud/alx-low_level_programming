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
 * create_file - function that creates a file.
 *
 * @filename: file name
 * @text_content: file content
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	ssize_t b = 0, lenth = _strlen(text_content);

	if (!filename)
		return (-1);
	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (op == -1)
		return (-1);
	if (lenth)
		b = write(op, text_content, lenth);
	close(op);
	return (b == lenth ? 1 : -1);
}

