#include "holberton.h"

#define size_in_bits(x) (sizeof(x) * 8)
#define false 0
#define true 1

/**
 * print_binary - prints the binary representation of a given number
 *
 * @n: number to print in binary form
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	int digit_printed = false;
	char bit;

	#define is_leading_zero(x) ((x) == '0' && !digit_printed && i != 0)

	for (i = size_in_bits(n) - 1; i >= 0; i--)
	{
		bit = '0' + ((n >> i) & 1);
		if (!is_leading_zero(bit))
		{
			_putchar(bit);
			digit_printed = true;
		}
	}
}
