#include "holberton.h"

/**
* print_line - prints the '_' character n times to create a line
* @n: number of times to print the '_' character
* Return: none-- void function
**/

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar(95);
			n--;
		}
	}
	_putchar(10);
}

