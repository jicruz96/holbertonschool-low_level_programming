
#include "holberton.h"
#include <stdio.h>

/**
* swap_int - swaps the value of two integers
*
* @a: first integer (its value swaps to the original value of b)
* @b: second integer (its value swaps to the original value of a)
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
