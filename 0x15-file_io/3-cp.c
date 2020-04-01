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
	int file_from, file_to, sz = 1, check;
	char buf[1024];

	if (argc != 3)	/* Check if argc = 3, if not, exit 97 */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);	/* Open file to read from */
	if (file_from == -1)			/* Exit 98 if can't open */
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	/* Open file to copy to */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664); /*Open copyfile*/
	if (file_to == -1)	/* Exit 98 if can't open */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (sz)
	{
		sz = read(file_from, buf, 1024);
		check = write(file_to, buf, sz);
		if (check == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	check = close(file_from);
	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	check = close(file_to);
	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
