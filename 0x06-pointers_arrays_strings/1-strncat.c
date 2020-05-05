#include "holberton.h"

/**
* _strncat - appends up to n bytes of src string onto end of dest string
* @src: string to be concatenated to end of dest-- up to src's nth byte
* @dest: string
* @n: number of bytes of src to append to end of dest
* Return: charpointer to concatenated string
**/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* go to end of dest string */
	while (dest[i] != '\0')
		i++;

	/* append up to n bytes of src */
	while (src[j] != '\0' && j < n)
		dest[i++] = src[j++];

	/* add null byte to end of dest */
	dest[i] = '\0';

	return (dest);
}
