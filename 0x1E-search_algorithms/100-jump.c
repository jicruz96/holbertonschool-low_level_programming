#include "0-linear.c"
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
	unsigned int jump_step, i, t;

	if (!array || !size)
		return (-1);

	jump_step = sqrt(size);
	for (i = 0; jump_step * i < size; i++)
	{
		t = jump_step * i;
		if (array[jump_step * i] >= value)
			break;
		printf("Value checked array[%u] = [%d]\n", t, array[t]);
	}

	t = jump_step * i;
	printf("Value found between indexes [%u] and [%u]\n", t - jump_step, t);
	if (t > size)
		t = size - 1;
	for (i = jump_step * (i - 1); i <= t; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
