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


	if (max - min < 0)		/* Check if min > max. If so, return NULL */
		return (NULL);

	p = malloc(sizeof(int) * size);	/* Allocate memory */

	if (p == NULL)				/* Check if malloc failed */
		return (NULL);

	for (i = 0; i < size; i++, setDigit++)	/* Initialize from min to max */
		p[i] = setDigit;

	return (p);
}
