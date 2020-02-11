#include "holberton.h"

/**
* print_alphabet_x10 - prints lower case alphabet to stdout, ten times.
**/

void print_alphabet_x10 (void)
{
	int c = 0;
	while (c < 10)
	{
		print_alphabet();
		c++;
	}
	_putchar(10);
}
