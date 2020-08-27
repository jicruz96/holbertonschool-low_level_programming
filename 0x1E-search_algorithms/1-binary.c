#include "search_algos.h"

void print_array(int *array, size_t size);

/**
 * binary_search - binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index where value is first found || -1 if not found or NULL array
 **/
int binary_search(int *array, size_t size, int value)
{
	int tmp, i, odd_shift;

	if (!array || size == 0)
		return (-1);

	print_array(array, size);

	if (size == 1)
		return (*array == value ? 0 : -1);

	odd_shift = (size % 2 == 0);
	i = size / 2 - odd_shift;

	if (array[i] == value)
		return (i);

	if (array[i] < value)
	{
		array = array + i + 1;
		tmp = binary_search(array, i + odd_shift, value);
		if (tmp == -1)
			return (-1);
		return (i + 1 + tmp);
	}

	return (binary_search(array, i, value));
}

/**
 * print_array - prints array
 * @array: array to print
 * @size: size of array
 **/
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i + 1 != size)
			printf(", ");
	}
	printf("\n");
}
