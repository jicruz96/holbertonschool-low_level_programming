#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
*
* @a: array to be printed
* @n: number of elements of the array to be printed
*
* Return: void
*/

void print_array(int *a, int n)
{
	int index_num;

	for (index_num = 0; index_num < n; index_num++)
	{
		printf("%d", a[index_num]);
		if (index_num != n - 1)
			printf(", ");
	}
	printf("\n");
}
