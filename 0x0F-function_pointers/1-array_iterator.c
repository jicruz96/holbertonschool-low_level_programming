#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function on an array
*
* @array: array to execute function on
* @size: size of array
* @action: function to execute on array
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
