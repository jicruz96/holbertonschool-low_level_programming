#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r, i;

	printf("  0 1 2 3 4 5 6 7 8 9 \n");
	for (i = 0; i < 100; i += 10)
	{
		printf("%d ", i / 10);
		r = is_prime_number(i);
		printf("%d ", r);
		r = is_prime_number(i + 1);
		printf("%d ", r);
		r = is_prime_number(i + 2);
		printf("%d ", r);
		r = is_prime_number(i + 3);
		printf("%d ", r);
		r = is_prime_number(i + 4);
		printf("%d ", r);
		r = is_prime_number(i + 5);
		printf("%d ", r);
		r = is_prime_number(i + 6);
		printf("%d ", r);
		r = is_prime_number(i + 7);
		printf("%d ", r);
		r = is_prime_number(i + 8);
		printf("%d ", r);
		r = is_prime_number(i + 9);
		printf("%d\n", r);
	}
	return (0);
}
