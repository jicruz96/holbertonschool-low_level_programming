#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
*
* @array: array of integers to search
* @size: size of array
* @cmp: comparison algorithm for integer search
*
* Return: matched integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int check, i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check != 0)
			return (i);
	}

	return (-1);
}
