#include <stdlib.h>
#include "holberton.h"

/**
* malloc_checked - allocates memory or exits process if failed
*
* @b: amount of memory to allocate
*
* Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *p;	/* Create a void pointer */

	p = malloc(b);	/* Allocate memory of size b to pointer */

	if (p == NULL)	/* If malloc fails, exit process with status of 98 */
		exit(98);

	return (p);	/* Return the pointer otherwise */
}
