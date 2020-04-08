#include "holberton.h"

/**
* print_numbers - prints digits 0 through 9
* Return: none-- void function
**/

void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}

