#include "holberton.h"
#include <stdio.h>
/**
* reverse_array - reverses the content of an array of integers
*
* @a: the array reverse_array operates on
* @n: the number of elements of the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int index_num = 0;
	char store;

	while (index_num < n--)
	{
		store = a[index_num];
		a[index_num++] = a[n];
		a[n] = store;
	}
}
