#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - computes and prints the sum of all multiples of 3 or 5 below 1024
 * Return - 0
 */
int main(void)
{
	int cap = 10;
	int mul[] = {3, 5};
	int num_mul = sizeof(mul) / sizeof(int);
	int sum = 0, i = 0, j, prev_sum;

	while (++i < cap)
		for (j = 0, prev_sum = sum; j < num_mul && prev_sum == sum; j++)
			if (!(i % mul[j]))
				sum += i;
	printf("%d\n", sum);
	return(0);
}
