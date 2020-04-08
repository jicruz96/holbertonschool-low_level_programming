#include "holberton.h"

/**
* times_table - prints multiplication table for the number 9
*
* Return: no return value
*/

void times_table(void)
{
	int r, c, m;

	r = 0;
	m = 9;

	while (r <= m)
	{
		c = 0;

		while (c <= m)
		{
			if (c == 0)
				_putchar('0');
			else if (c * r < 10)
			{
				_putchar(' ');
				_putchar(c * r + '0');
			}
			else
			{
				_putchar(c * r / 10 + '0');
				_putchar(c * r % 10 + '0');
			}
			if (c != m)
			{
				_putchar(',');
				_putchar(' ');
			}
			c++;
		}
		r++;
		_putchar(10);
	}
}
