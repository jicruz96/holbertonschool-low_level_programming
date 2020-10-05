#include "holberton.h"
#include <stdio.h>
#define CAP 50
/**
 * main - computes and prints the sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2, tmp, i = 0;

	for (i = 0; i < CAP; i++)
	{
		if (num1 != 1)
			printf(", ");
		printf("%lu", num1);
		tmp = num1;
		num1 = num2;
		num2 += tmp;
	}
	printf("\n");
	return (0);
}
