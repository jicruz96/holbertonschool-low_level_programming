#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* _strdup - returns a pointer to a space in memory that has a copy of a string
*
* @str: string to be copied to newly allocated memory space
*
* Return: char pointer to string, or NULL if memory allocation fails
*/

char *_strdup(char *str)
{
	int i;
	char *ptr;

	/*for (strlen = 0; str[strlen] != '\0'; strlen++)
		;
	ptr = malloc(strlen * sizeof(char));*/
	ptr = malloc(sizeof(str) / sizeof(*str));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	return (ptr);
}
