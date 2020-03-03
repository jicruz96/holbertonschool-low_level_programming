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
	int i, strlen;
	char *ptr;

	for (strlen = 0; str[strlen] != '\0'; strlen++) /* get string length */
		;
	ptr = malloc(strlen * sizeof(char));		/* allocate memory */
	if (ptr == NULL)				/* check for NULL */
		return (NULL);
	for (i = 0; i < strlen; i++)			/* copy string */
		ptr[i] = str[i];
	return (ptr);					/* return pointer */
}
