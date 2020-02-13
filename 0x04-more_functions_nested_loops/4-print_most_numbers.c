#include "holberton.h"

/**
* print_most_numbers - prints digits 0 through 9, except for 2 and 4
* Return: none-- void function
**/

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar(10);
}

