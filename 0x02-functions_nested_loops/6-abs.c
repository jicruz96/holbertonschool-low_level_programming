#include "holberton.h"

/**
* _abs - computes and returns the absolute value of an integer.
* @n: number to be evaluated
* Return: absolute value of argument
**/
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
