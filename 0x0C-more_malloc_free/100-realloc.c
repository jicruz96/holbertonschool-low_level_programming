  
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
	char *p;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{	/* if ptr is null, or if new size != 0 or old_size */
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		for (i = 0; i < old_size && i < new_size; i++)
			p[i] = *((char *)ptr + i);
	}
	free(ptr);
	return (p);
}
