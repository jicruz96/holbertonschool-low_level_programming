#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to standard output
 *
 * @filename: name of file to be read
 * @letters: number of letters to be read and printed
 *
 * Return: actual number of letters printed | 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_printed;
	int fd;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	letters_printed = write(STDOUT_FILENO, buf, read(fd, buf, letters));

	close(fd);

	if (letters_printed <= 0)
		return (0);

	return (letters_printed);
}
