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
	while (count--)
		_putchar(s[count]);
	_putchar(10);
}
