#include "holberton.h"

/**
* _memset - fills memory with a constant byte
* @s: memory area to be filled with the constant byte
* @b: constant byte
* @n: number of bytes to fill with the constant byte
* Return: pointer to memory area s
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
