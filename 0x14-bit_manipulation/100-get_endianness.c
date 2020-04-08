#include "holberton.h"

/**
 * get_endianness - figures out the endianness of your machine
 *
 * Return: 1 if little endian | 0 if big endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	return (*c);
}
