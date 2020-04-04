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
	int check;

	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	check = sqrt_search(0, n / 2, n);

	if (check * check == n)
		return (check);

	return (-1);
}
/**
 * sqrt_search - finds a guess for the square root of n
 * @low: low-ball guess, usually zero
 * @high: high-ball guess, usually no greater than n / 2
 * @n: number to find square root for
 * Return: guess of square root
 */
int sqrt_search(int low, int high, int n)
{
	int guess = (low + high) / 2;
	int next = guess + 1, prev = guess - 1;
	int guess_squared = guess * guess, next_squared = next * next;

	if (low > high)
		return (low);
	if ((guess_squared <= n) && (next_squared > n))
		return (guess);
	if (guess_squared < n)
		return (sqrt_search(next, high, n));
	return (sqrt_search(low, prev, n));
}
