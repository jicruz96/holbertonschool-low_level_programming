#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm
 * @array: sorted array of integers
 * @size: number of integers
 * @value: value to search
 * Return: index of value || -1 if not found or array NULL
 **/
int jump_search(int *array, size_t size, int value)
{
	unsigned int block_size = sqrt(size), start, end = 0;

	if (!array || !size)
		return (-1);

	for (; end < size && array[end] < value; end += block_size)
		printf(VALUE_CHECKED, end, array[end]);

	start = end - block_size;
	printf(VALUE_FOUND, start, end);
	end = end < size ? end : size - 1;
	for (; start <= end; start++)
	{
		printf(VALUE_CHECKED, start, array[start]);
		if (array[start] == value)
			return ((int)start);
	}
	return (-1);
}
