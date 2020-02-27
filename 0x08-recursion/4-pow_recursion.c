#include "holberton.h"

/**
* _pow_recursion - returns x to the power of y
*
* @x: base
* @y: power
*
* Return: x^(y)
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
