#include "holberton.h"
#include <stdio.h>
/**
* puts_half - prints the second half of a string
*
* @str: string to be printed
*
* Return: void
*/

void puts_half(char *str)
{
	int strlen = 0;
	int n, c;

	while (str[strlen])
		strlen++;
	for (n = (strlen + 1) / 2; n < strlen; n++)
	{
		c = str[n];
		_putchar(c);
	}
	_putchar(10);
}
