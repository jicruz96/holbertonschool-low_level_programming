#include "holberton.h"

/**
* _memcpy - copies memory area
*
* @dest: memory area to where new values will be copied into
* @src: source of memory area to be copied into dest
* @n: number of bytes from src to copy into dest
*
* Return: pointer to dest
*
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
