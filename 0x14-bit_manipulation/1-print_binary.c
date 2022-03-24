#include "holberton.h"

#define size_in_bits(x) (sizeof(x) * 8)
#define BUFFER_SIZE size_in_bits(unsigned long int)


/**
 * print_binary - prints the binary representation of a given number
 *
 * @n: number to print in binary form
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char buffer[BUFFER_SIZE];
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = BUFFER_SIZE; n != 0; n >>= 1)
		buffer[--i] = '0' + (n & 1);
	
	for (; i < (int)BUFFER_SIZE; i++)
		_putchar(buffer[i]);
}
