#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index where value is first found || -1 if not found or NULL array
 **/
int binary_search(int *array, size_t size, int value)
{
	int tmp, odd_shift;
	size_t i;

	if (!array || !size)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d%s", array[i], i + 1 == size ? "\n" : ", ");

	odd_shift = (size % 2);
	size /= 2;
	i = size - (size > 0 && !odd_shift);

	if (array[i] == value)
		return (i);

	if (array[i] > value)
		return (binary_search(array, i, value));

	tmp = binary_search(array + i + 1, size, value);
	if (tmp == -1)
		return (-1);

	return (size + odd_shift + tmp);
}
