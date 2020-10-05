#include "holberton.h"

/**
 * print_number - prints number
 * @number: number
 **/
void print_number(int number)
{
	if (number > 9)
	{
		print_number(number / 10);
		_putchar(number % 10 + '0');
	}
	else
	{
		_putchar(number + '0');
	}
}

/**
* print_times_table - prints multiplication table for n if n >= 0 and <= 15
* @n: number
*/
void print_times_table(int n)
{
	int row, column, product;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++, _putchar('\n'))
		for (column = 0; column <= n; column++)
		{
			product = row * column;
			if (column)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 100)
				{
					_putchar(' ');
					if (product < 10)
						_putchar(' ');
				}
			}
			print_number(product);
		}
}

