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
	char *c;	/* decalre a char pointer. to be used if size = 1 */


	if (nmemb == 0 || size == 0)	/* If either argument is zero, return NULL */
		return (NULL);

	c = malloc(size * nmemb);	/* set memory to include a space for null */

	if (c == NULL)			/* if malloc fails, return NULL */
		return (NULL);

	for (i = 0; i < size * nmemb; i++)	/* Set memory to zero for all elements */
		c[i] = 0;

	return (c);		/* Return the char pointer as void pointer */
}
