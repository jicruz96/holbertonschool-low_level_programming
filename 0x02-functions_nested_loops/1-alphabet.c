#include "holberton.h"

/**
* print_alphabet - prints lower case alphabet to stdout
* 
* Description: 
* prints all lower case letters in alphabetical order
* to stdout out once, followed by a new line.
* 
* Return: none-- void function
**/

void print_alphabet(void)
{
	int c = 97;
	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}

