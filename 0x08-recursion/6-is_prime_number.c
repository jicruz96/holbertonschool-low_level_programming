#include "holberton.h"
#include <math.h>
/**
* is_prime_number - returns 1 if n is a prime number, 0 if composite
*
* @n: number to be checked
*
* Return: 1 if prime, 0 if composite
*/

int is_prime_number(int n)
{
	int filter;

	if (n < 0)
		return (0);
	if (n / 10 >= 1)
	{
		filter = is_prime_number(n % 10);
		if (filter == 1 || n % 10 == 1 || n % 10 == 9)
		{
			if (n % 2 == 0 || n % 5 == 0)
			{
				return (0);
			}
			else
			{
				return (1);
			}
		}
		else
		{
			return (0);
		}
	}

	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	else
		return (0);
}
