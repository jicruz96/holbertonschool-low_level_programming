#include "search_algos.h"

/**
 * interpolation_search - interpolation search algorithm
 * @array: sorted array of integers
 * @size: number of integers
 * @value: value to search for
 * Return: index of value || -1 if not found or array NULL
 **/
int interpolation_search(int *array, size_t size, int value)
{
	double start_val, end_val, interpolant;
	size_t search_area_size;
	unsigned int pos;
	size_t start, end, tmp;

	if (!array || !size)
		return (-1);

	end = size - 1;
	start = 0;

	for (end = size - 1, start = 0; start != end;)
	{
		search_area_size = end - start;
		start_val = (double)array[start];
		end_val = (double)array[end];
		interpolant = (value - start_val) / (end_val - start_val);
		pos = interpolant * search_area_size + start;
		printf("Value checked array[%u] ", pos);
		if (pos > size - 1)
		{
			printf("is out of range\n");
			return (-1);
		}

		printf("= [%d]\n", array[pos]);

		if (array[pos] == value)
			return (pos);

		tmp = (array[pos] > value);
		start = start * tmp + (pos + 1) * !tmp;
		end = end * !tmp + (pos - 1) * tmp;
	}

	if (array[start] == value)
		return (start);

	return (-1);
}
