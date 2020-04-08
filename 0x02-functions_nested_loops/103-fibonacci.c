#include "holberton.h"
#include <stdio.h>
#define CAP 4000000
/**
 * main - computes and prints the sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	unsigned long prevDigit = 1, prevSum = 1, sum = 1, sum_of_evens = 0;

	while (sum + prevDigit <= CAP)
	{
		prevSum = sum;
		sum += prevDigit;
		if (!(sum % 2))
			sum_of_evens += sum;
		prevDigit = prevSum;
	}
	printf("%lu\n", sum_of_evens);
	return (0);
}
