#include "holberton.h"

/**
 * print_binary - prints the binary representation of a given number
 *
 * @n: number to print in binary form
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}

	for (; n; n >>= 1)
		_putchar('0' + (n & 1));
}
