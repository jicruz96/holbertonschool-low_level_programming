#include "holberton.h"

/**
* _sqrt_recursion - returns the natural square root of int n if it exists
*
* @n: sqrt(n) is returned
*
* Return: sqrt(n) if it exists, -1 otherwise
*/

int _sqrt_recursion(int n)
{
	int guess1, guess2;

	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		guess1 = _sqrt_recursion(n - 1);
		guess2 = (guess1 + (n / guess1)) / 2;
		return (guess2);
	}
}
