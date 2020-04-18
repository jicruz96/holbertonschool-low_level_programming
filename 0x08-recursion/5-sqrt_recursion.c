#include "holberton.h"
#include <stdio.h>
/**
* _sqrt_recursion - returns the natural square root of int n if it exists
* @n: sqrt(n) is returned
* Return: sqrt(n) if it exists, -1 otherwise
*/
int _sqrt_recursion(int n)
{
	int is_even = (n % 2) ^ 1,
		div = 1 + is_even;

	if (n < 0)
		return (-1);

	if (n < 2)
		return (n);

	return (sqrt_check(n, div));
}

/**
 * sqrt_check - checks if natural square root exists
 * @n: number to check
 * @guess: guess of square root
 * Return: sqrt(n) if it exists, -1 otherwise
 **/
int sqrt_check(int n, int guess)
{
	if (guess * guess > n)
		return (-1);

	if ((n / guess == guess) && !(n % guess))
		return (guess);

	return (sqrt_check(n, guess + 2));
}
