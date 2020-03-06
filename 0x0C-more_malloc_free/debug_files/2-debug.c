#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
* _calloc - allocates nmemb * size amount of memory for an array
*
* @nmemb: number of members, or elements, to allocate for
* @size: size of bytes of each element
*
* Return: 0 if successful, NULL if malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;			/* declare a void pointer. we'll return this later */

	if (nmemb == 0 || size == 0)	/* If either argument is zero, return NULL */
	{
		printf("An argument is zero, returning NULL!\n");
		return (NULL);
	}

	p = malloc(size * nmemb);	/* allocate memory */
	printf("p set to memory size = %d\n", size * nmemb);
	if (p == NULL)			/* if malloc fails, return NULL */
	{
		printf("malloc failed, returning NULL!\n");
		return (NULL);
	}

	memset(p, 0, size * nmemb);	/* Set memory to zero for all elements */
	printf("all elements set to 0\n. Returning p...\n");

	return (p);			/* Return the initialized, void pointer */
}
