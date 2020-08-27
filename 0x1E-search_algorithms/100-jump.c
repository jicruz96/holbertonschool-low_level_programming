#include "0-linear.c"
#include <math.h>
#define VALUE_CHECKED "Value checked array[%u] = [%d]\n"

/**
 * jump_search - jump search algorithm
 * @array: sorted array of integers
 * @size: number of integers
 * @value: value to search
 * Return: index of value || -1 if not found or array NULL
 **/
int jump_search(int *array, size_t size, int value)
{
	unsigned int block_size, start, end;

	if (!array || !size)
		return (-1);

	block_size = sqrt(size);
	for (end = 0; end < size && array[end] < value; end += block_size)
		printf(VALUE_CHECKED, end, array[end]);

	start = end - block_size;
	printf("Value found between indexes [%u] and [%u]\n", start, end);
	end = end < size ? end : size - 1;
	while (start <= end)
	{
		printf(VALUE_CHECKED, start, array[start]);
		if (array[start] == value)
			return ((int)start);
		start++;
	}

	return (-1);
}
