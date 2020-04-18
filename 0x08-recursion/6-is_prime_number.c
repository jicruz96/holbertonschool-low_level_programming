#include "holberton.h"
/**
* is_prime_number - returns 1 if n is a prime number, 0 if composite
*
* @n: number to be checked
*
* Return: 1 if prime, 0 if composite
*/

int is_prime_number(int n)
{
	int half = n / 2;
	int is_even = (n % 2) ^ 1;

	if (n < 2 || is_even)
		return (0);

	if (half < 4)
		return (1);

	if (!(half % 2))
		--half;

	if (prime_check(n, half))
		return (1);

	return (0);
}
/**
 * prime_check - checks if the number is prime
 * @n: number to check
 * @div: divisor that helps us check recursively
 * Return: 1 if prime, 0 otherwise
 **/
int prime_check(int n, int div)
{
	if (div == 3 && (n % 3))
		return (1);
	if (n % div)
		return (prime_check(n, div - 2));

	return (0);
}
