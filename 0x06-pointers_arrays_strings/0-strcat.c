#include "holberton.h"

/**
* _strcat - concatenates two strings
* @src: string to add to end of dest
* @dest: string.
* Return: pointer to new string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Go to null byte at end of dest string */
	while (dest[i] != '\0')
		i++;

	/* Add src to end of dest, one char at a time */
	while (src[j] != '\0')
		dest[i++] = src[j++];

	/* Add null byte to end of dest + src */
	dest[i] = '\0';

	return (dest);
}
