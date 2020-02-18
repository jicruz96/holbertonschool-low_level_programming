#include "holberton.h"

/**
* print_rev - prints a string in reverse, followed by a new line.
*
* @s: string to be printed
*
* Return: void
*/

void print_rev(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	for (; count >= 0; count--)
		_putchar(s[count]);
	_putchar(10);
}
