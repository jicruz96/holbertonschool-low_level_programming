#include "holberton.h"

/**
* more_numbers - prints numbers 0 through 14
* Return: none-- void function
**/

void more_numbers(void)
{
	int n, lines;

	for (lines = 0; lines < 10; lines++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar(10);
	}
}
