#include "holberton.h"

/**
* print_last_digit - prints the last digit of a number
* @n: number to be evaluated
* Return: value of last digit
*/

int print_last_digit(int n)
{
	int LastDigit = n % 10;
	int LastDigit_neg = LastDigit - 2 * LastDigit;

	if (n > 0)
	{
		_putchar(LastDigit + 48);
		return (LastDigit);
	}
	else
	{
		_putchar (LastDigit_neg + 48);
		return (LastDigit_neg);
	}
}
