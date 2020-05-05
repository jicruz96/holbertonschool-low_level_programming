#include "holberton.h"

/**
* _strcpy - copies src onto buffer pointed to by dest
* @src: string to copy
* @dest: buffer where string is to be copied
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
