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
	unsigned long int subtractor = 1, exp;
	int digits = 1;

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

	while (digits--)
	{
		exp = digits;
		subtractor = 1;

		while (exp--)
			subtractor *= 2;

		if (subtractor <= n)
		{
			n -= subtractor;
			_putchar('1');
		}
		else
			_putchar('0');

	}
}
