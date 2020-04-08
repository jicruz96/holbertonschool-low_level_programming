#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
* array_range - creates an array of integers in ascending order
*
* @min: smallest integer to include in array
* @max: largest integer to include in array
*
* Return: 0 if successful, NULL if malloc fails or if min > max
*/

int *array_range(int min, int max)
{
	int i;
	int setDigit = min;		/* to be used for setting values of memory */
	int size = max - min + 1;	/* declare var size, to be used for memory */
	int *p;				/* declare an int pointer. this shall be returned */

	printf("setDigit = %d, size = %d, max = %d, min = %d\n", setDigit, size, max, min);

	if (max - min < 0)		/* Check if min > max. If so, return NULL */
	{
		printf("Min is greater than max! ERROR! Returning NULL\n");
		return (NULL);
	}

	p = malloc(sizeof(int) * size);	/* Allocate memory */

	printf("memory allocated!\n");
	if (p == NULL)				/* Check if malloc failed */
	{
		printf("Malloc failed. Returning NULL\n");
		return (NULL);
	}

	for (i = 0; i < size; i++, setDigit++)	/* Initialize from min to max */
	{
		p[i] = setDigit;
		printf("Loop #%d: p[%d] = %d\n", i, i, p[i]);
	}

	return (p);
}
