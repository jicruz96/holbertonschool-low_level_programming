#include "holberton.h"

/**
* print_alphabet_x10 - prints lower case alphabet to stdout, ten times.
**/

void print_alphabet_x10(void)
{
	int c = 0;
	int alpha;

	while (c < 10)
	{
		alpha = 97;
		while (alpha < 123)
		{
			_putchar(alpha);
			alpha++;
		}
	_putchar(10);
	c++;
	}
}
