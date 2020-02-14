#include <math.h>
#include "holberton.h"

/**
* print_number - prints integer n
* @n: number to be printed
*/

void print_number(int n)
{
	int temp = n;
	int size = 1;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	while (temp / 10 != 0)
	{
		temp = temp / 10;
		size = size * 10;
	}

	for (; size > 0; size /= 10)
	{
		temp = n / size;
		_putchar(temp + '0');
		n = n % size;
	}
}
