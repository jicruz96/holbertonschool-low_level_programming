#include "holberton.h"

/**
 * create_file - creates a file
 *
 * @filename: file name
 * @text_content: file content
 *
 * Return: 1 (success) | -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, check = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
		check = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (check == -1)
		return (-1);

	return (1);
}
