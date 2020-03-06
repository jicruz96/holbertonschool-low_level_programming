#include <stdlib.h>
#include <stdio.h>
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
	unsigned int i;
	int *p;		/* declare an int pointer. to be used with non char pointers */
	char *c;	/* decalre a char pointer. to be used if size = 1 */
	

	if (nmemb == 0 || size == 0)	/* If either argument is zero, return NULL */
		return (NULL);
	/*
	* if size == 1, then we're dealing with a character pointer and we'll
	* have to use our char pointer. Otherwise, we'll use the regular pointer.
	*/
	if (size == 1)				/* For char pointers */
	{
		c = malloc(size * nmemb);	/* set memory to include a space for null */
		if (c == NULL)			/* if malloc fails, return NULL */
		{
			printf("malloc failed, returning NULL!\n");
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)	/* Set memory to zero for all elements */
		{
			c[i] = 0;
			printf("Set c[%d] (&%p) to .%c.\n", i, &c[i], c[i]);
		}
		return ((void *)c);		/* Return the char pointer as void pointer */
	}
	else					/* For regular pointers */
	{
		p = malloc(size * nmemb);	/* allocate memory */
		if (p == NULL)			/* if malloc fails, return NULL */
			return (NULL);
		for (i = 0; i < nmemb; i++)	/* Set memory to zero for all elements */
			p[i] = 0;
		return ((void *)p);		/* Return p as a void pointer */
	}
}
