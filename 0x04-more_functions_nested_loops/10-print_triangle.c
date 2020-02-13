#include "holberton.h"

/**
* print_triangle - draws a right triangle of base length n '#' characters
* @n: base of triangle, represented with '#' characters
* Return: none-- void function
**/

void print_triangle(int n)
{
	if (n > 0)
	{
		int lines, spaces, hashes;

		for (lines = 1; lines <= n; lines++)
		{
			for (spaces = n - lines; spaces > 0; spaces--)
				_putchar(' ');
			for (hashes = lines; hashes > 0; hashes--)
				_putchar('#');
			if (lines != n)
				_putchar(10);
		}
	}
	_putchar(10);
}
