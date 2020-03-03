#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* create_array - creates a character array and initializes it
*
* @size: size of the character array
* @c: character to add to array to initialize it
*
* Return: char pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;			/*declare pointer to array */

	size *= sizeof(c);		/* scale size to fit size of data type */
	array = malloc(size);		/* make array point to memory of size */
	if (array == NULL)		/* check if memory was successfully allocated */
		return (NULL);
	for (i = 0; i < size; i++)	/* initialize array indexes with c */
		array[i] = c;
	return (array);			/* return the pointer to the array */
}
