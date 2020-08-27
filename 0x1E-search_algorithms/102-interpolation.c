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
	size_t pos, end, start = 0;

	if (!array || !size)
		return (-1);

	for (end = size - 1, start = 0; start != end;)
	{
		start_val = (double)array[start];
		end_val = (double)array[end];
		interpolant = (value - start_val) / (end_val - start_val);
		pos = interpolant * (end - start) + start;

		printf("Value checked array[%d] ", (int)pos);
		if (pos > size - 1)
		{
			printf("is out of range\n");
			return (-1);
		}
		printf("= [%d]\n", array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			end = pos - 1;
		else if (array[pos] < value)
			start = pos + 1;
	}

	if (array[start] == value)
		return (start);

	return (-1);
}
