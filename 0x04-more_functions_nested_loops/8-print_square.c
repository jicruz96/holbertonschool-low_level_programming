#include "holberton.h"

/**
* print_square - draws a "square" using the '#' character n times
* @size: number of times to print the '#' character
* Return: none-- void function
**/

void print_square(int size)
{
	if (size > 0)
	{
		int hashes, lines;

		for (lines = size; lines > 0; lines--)
		{
			for (hashes = size; hashes > 0; hashes--)
				_putchar('#');
			_putchar(10);
		}
	}
	_putchar(10);
}

