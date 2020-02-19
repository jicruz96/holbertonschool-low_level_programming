#include "holberton.h"
#include <stdio.h>

/**
* *_strcpy - copies the string pointed to by src
* to the buffer pointed to by dest
*
* @src: pointer to string that is to be copied
* @dest: identifies buffer where string is to be copied
*
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
	int index_num;

	for (index_num = 0; src[index_num]; index_num++)
		dest[index_num] = src[index_num];
	index_num++;
	dest[index_num] = src[index_num];
	return (dest);
}
