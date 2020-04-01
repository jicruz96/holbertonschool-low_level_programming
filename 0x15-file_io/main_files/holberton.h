#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _strlen(char *string);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
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
#endif
