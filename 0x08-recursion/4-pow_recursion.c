#include "holberton.h"

/**
* factorial - returns the factorial of a given number
*
* @n: n! will be returned
*
* Return: n!
*/

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		else
			return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
