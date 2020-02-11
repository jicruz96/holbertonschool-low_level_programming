#include "holberton.h"

/**
* print_alphabet - prints lower case alphabet to stdout
**/

void print_alphabet (void)
{
	char c = 97;
	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
