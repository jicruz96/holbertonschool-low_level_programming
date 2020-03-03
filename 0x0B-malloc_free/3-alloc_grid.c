#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* alloc_grid - creates and returns a 2 dimensional array of integers
*
* @width: width of array
* @height: height of array
*
* Return: pointer to array, or NULL if widght, height < 0 or if malloc failure
*/

int **alloc_grid(int width, int height)
{
	int **array;			/*declare pointer to array */
	int i;

	if (width <= 0 || height <= 0)	/* check if width or height <= 0 */
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));	/* allocate memory to array */

	if (array == NULL)		/* check if malloc failed */
		return (NULL);

	for (i = 0; i < height; i++)	/* allocate memory to array within array */
		array[i] = (int *)malloc(width * sizeof(int));

	if (array == NULL)		/* check if malloc failed */
		return (NULL);
	return (array);			/* return the pointer to the array */
}
