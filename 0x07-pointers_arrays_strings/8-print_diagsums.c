#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
*
* @a: array
* @size: size of the square matrix
*
* Return: void
*
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + i * (size + 1));
		sum2 = sum2 + *(a + (size - 1) * (i + 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
