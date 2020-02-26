#include "holberton.h"

/**
* factorial - returns the factorial of a given number
*
* @n: n! will be returned
*
* Return: n!
*/

int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (1);
		else
			return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
