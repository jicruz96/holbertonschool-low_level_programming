#include "holberton.h"

/**
* print_sign - prints the sign of a number n.
*
* @n: number to be checked for sign.
*
* Return:
*  1 and prints + if n > 0
* -1 and prints - if n < 3
*  0 and prints 0 if n = 0
*
*/

int print_sign(int n)
{
	if (n != 0)
	{
		if (n > 0)
		{
			_putchar(43);
			return (1);
		}
		else
		{
			_putchar(45);
			return (-1);
		}
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
