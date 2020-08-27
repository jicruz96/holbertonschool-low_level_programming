#include "1-binary.c"

/**
 * exponential_search - exponential search algorithm
 * @array: sorted array of integers
 * @size: number of integers
 * @value: value to search for
 * Return: index of value || -1 if not found or array NULL
 **/
int exponential_search(int *array, size_t size, int value)
{
	unsigned int bound, start, end;
	int result;

	if (!array || !size)
		return (-1);

	for (bound = 1; bound < size && array[bound] < value; bound *= 2)
		printf(VALUE_CHECKED, bound, array[bound]);

	start = bound / 2;
	end = bound < size ? bound : size - 1;
	size = end - start + 1;

	printf(VALUE_FOUND, start, end);

	result = binary_search(array + start, size, value);
	if (result == -1)
		return (-1);

	return (start + result);
}
