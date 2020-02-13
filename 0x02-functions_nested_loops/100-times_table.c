#include "holberton.h"

/**
* print_times_table - prints multiplication table for the number n
* @n: number
* Return: no return value
*/

void print_times_table(int n)
{
	int r, c;

	for (r = 0; r <= n; r++)
	{
		if (n < 0 || n > 15)
			break;
		for (c = 0; c <= n; c++)
		{
			if (c != 0)
			{
				if (c * r < 100)
				{
					_putchar(' ');
					if (c * r < 10)
						_putchar(' ');
					else
						_putchar(c * r / 10 + '0');
				}
				else
				{
					_putchar(c * r / 100 + '0');
					_putchar((c * r % 100) / 10 + '0');
				}
			}
			_putchar((c * r % 10) + '0');
			if (c != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}

