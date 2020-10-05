#include "holberton.h"
#include <stdio.h>
#define MAX 4000000

/**
 * main - entry point
 * Return: always 0
 **/
int main(void)
{
	int num1 = 0, num2 = 1, sum = 0, result = 0;

	while (sum <= MAX)
	{
		result += (sum % 2 == 0) * sum;
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
	}
	printf("%d\n", result);
	return (0);
}

