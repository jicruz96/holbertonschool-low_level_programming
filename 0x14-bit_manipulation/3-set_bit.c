#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index for a given number
 *
 * @n: given number
 * @index: given index
 *
 * Return: value of the bit at index | -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int subtractor = 1, exp, digits = 1;
	int buffer[64];

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

	if (index + 1 > digits)
		return (0);

	while (digits--)
	{
		exp = digits;
		subtractor = 1;

		while (exp--)
			subtractor *= 2;

		if (subtractor <= n)
		{
			n -= subtractor;
			buffer[digits] = 1;
		}
		else
			buffer[digits] = 0;

		if (digits == index)
			return (buffer[digits]);
	}

	return (-1);
}
/**
 * set_bit - sets the value of a bit to 1 at a given index for a given number
 *
 * @n: given number
 * @index: given index
 *
 * Return: 1 if successful | -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int check = get_bit(*n, index), add = 1;

	if (check == -1)
		return (-1);

	if (check == 0)
	{
		while (index--)
			add *= 2;

		*n += add;
	}

	return (1);
}
