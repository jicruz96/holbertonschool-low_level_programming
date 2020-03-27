#include "holberton.h"
#include <stdlib.h>
/**
 * binary - writes a number's binary representation into a buffer in reverse
 *
 * @n: given number
 * @buffer: buffer
 *
 * Return: void
 */
void binary(unsigned long int n, char *buffer)
{
	unsigned long int subtractor = 1, exp, digits = 1;

	if (n == ULONG_MAX)
		digits = 64;
	else
	{
		while (subtractor * 2 <= n)
		{
			subtractor *= 2;
			digits++;
		}
	}

	buffer[digits] = '\0';

	while (digits--)
	{
		exp = digits;
		subtractor = 1;

		while (exp--)
			subtractor *= 2;

		if (subtractor <= n)
		{
			n -= subtractor;
			buffer[digits] = '1';
		}
		else
			buffer[digits] = '0';
	}
}
/**
 * flip_bits - returns the number of bits to flip to get from m to n
 *
 * @n: given number
 * @m: other number
 *
 * Return: number of bit flips necessary to get from m to n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = (n ^ m);
	char diff_binary[65];
	int i = 0, count = 0;

	binary(diff, diff_binary);

	for (; diff_binary[i] != '\0'; i++)
		if (diff_binary[i] == '1')
			count++;

	return (count);
}
