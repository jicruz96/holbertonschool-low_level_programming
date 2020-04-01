#include "holberton.h"

/**
 * main - copies a file
 *
 * @argc: argument count (should always be 3)
 * @argv: array of arguments
 *
 * Return: number of letters printed | 0 if error
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, sz = 1024;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		cant_read(argv[1]);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		cant_write(argv[2]);

	while (sz == 1024)
	{
		sz = read(file_from, buf, 1024);
		if (sz == -1)
			cant_read(argv[1]);

		if (write(file_to, buf, sz) == -1)
			cant_write(argv[2]);
	}

	if (close(file_from) == -1)
		cant_close(file_from);

	if (close(file_to) == -1)
		cant_close(file_from);

	return (0);
}
/**
 * cant_close - prints "can't close" error message
 * @fd: file descriptor number
 * Return: exit code 100
 */
void cant_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * cant_read - prints "can't read" error message
 * @filename: file name
 * Return: exit code 98
 */
void cant_read(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * cant_write - prints "can't write" error message
 * @filename: file name
 * Return: exit code 99
 */
void cant_write(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(100);
}
