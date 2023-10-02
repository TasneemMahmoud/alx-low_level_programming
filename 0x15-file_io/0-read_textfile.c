#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 *	to the POSIX standard output.
 *
 * @filename: The file name
 * @letters: file letters
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	b = read(op, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(op);
	return (b);
}
