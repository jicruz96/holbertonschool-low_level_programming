#include "holberton.h"
#include <stdio.h>
#define CAP 50
/**
 * main - computes and prints the sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	unsigned long prevDigit = 1, prevSum = 1, sum = 2, i = 0;

	if (CAP)
		printf("%lu", prevDigit);

	while (++i < CAP)
	{
		printf(", %lu", sum);
		prevSum = sum;
		sum += prevDigit;
		prevDigit = prevSum;
	}
	printf("\n");
	return (0);
}
