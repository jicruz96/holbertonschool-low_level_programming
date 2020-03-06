#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
* _realloc - reallocates a memory block using malloc and free
*
* @ptr: pointer to reallocate memory for
* @old_size: former size of memory for ptr
* @new_size: new size of memory for ptr
*
* Return: void pointer to new allocated memory, or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	int *ptr_copy = ptr;

	printf("ptr = something, old_size = %d, new_size = %d\n", old_size, new_size);

	for (i = 0; i < old_size; i++)
	{
		printf("ptr_copy[%d] = %d\n", i, ptr_copy[i]);
	}

	return (ptr);
}
