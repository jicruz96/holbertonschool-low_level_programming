#include "holberton.h"

/**
* print_diagonal - draws diagonal line using the '\' character n times
* @n: number of times to print the '\' character
* Return: none-- void function
**/

void print_diagonal(int n)
{
	if (n > 0)
	{
		int lines, spaces;

		for (lines = 0; lines < n; lines++)
		{
			for (spaces = lines; spaces > 0; spaces--)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
