#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CAP 98
/**
 * main - computes the first CAP Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long tmp = 1, prevSum = 1, sum = 2, i = 0;
	unsigned long tmpMore = 0, prevSumMore = 0, sumMore = 0;
	unsigned long divisor = 100000;

	if (!(divisor))
	{
		printf("Error: divisor in code is 0. Please change value in line 12\n");
		exit(1);
	}

	if (CAP)
		printf("%lu", prevSum);

	while (++i < CAP)
	{
		if (sumMore)
		{
			tmp += prevSum;
			printf(", %lu%lu", sumMore, sum);
		}
		else
			printf(", %lu", sum);

		tmp = sum;
		tmpMore = sumMore;
		if (sum + prevSum >= divisor)
		{
			sumMore += (sum + prevSum) / divisor;
			sum = (sum + prevSum) % divisor;
		}
		else
			sum += prevSum;
		prevSum = tmp % divisor;
		prevSumMore += tmp / divisor;
		sumMore += prevSumMore;
		prevSumMore = tmpMore;
	}
	printf("\n");
	return (0);
}
