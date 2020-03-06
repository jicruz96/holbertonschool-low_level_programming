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
	int i;
	int *p;				/* declare an int pointer. this shall be returned */


	if (new_size > old_size)		/* Check if new_size > old_size */
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		p = malloc(new_size);
		return (p);
	}

}
