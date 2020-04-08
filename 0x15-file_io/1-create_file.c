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
/**
 * _strlen - return string length of given string
 *
 * @string: given string
 *
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string != NULL && string[i] != '\0'; i++)
		;

	return (i);
}
