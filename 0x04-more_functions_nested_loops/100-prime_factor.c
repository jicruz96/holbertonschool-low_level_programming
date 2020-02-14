#include <math.h>
#include <stdio.h>

/**
* prime_factor - finds and prints largest prime factor of n
* @n: number being factorized
* Return: void
*/

void prime_factor(long n)
{
	long divisor, original;

	original = n;

	for (divisor = 3; divisor < sqrt(original); divisor += 2)
	{
		if (n % divisor == 0)
			n = n / divisor;
		if (n == divisor)
			break;
	}
	printf("%ld\n", n);
}
/**
* main - Entry point
* Return: 0
*/

int main(void)
{
	prime_factor(612852475143);
	return (0);
}
