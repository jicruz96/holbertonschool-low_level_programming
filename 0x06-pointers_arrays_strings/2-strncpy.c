#include "holberton.h"

/**
* _strncpy - copies a string value, up to the nth byte, onto another string
*
* @src: string to be copied-- up to src's nth byte
* @dest: string that src is copied into, starting from the beginning
* @n: number of bytes of src to be copied to dest
*
* Return: charpointer to copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
