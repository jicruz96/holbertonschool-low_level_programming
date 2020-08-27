#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index where value is first found || -1 if not found or NULL array
 **/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%u] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return ((int)i);
		}

	return (-1);
}
