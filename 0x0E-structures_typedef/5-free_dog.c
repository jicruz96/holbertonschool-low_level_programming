#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* free_dog - frees the memory off a struct dog pointer
*
* @d: pointer to be freed
*
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	
	free(d);
	free((*d).name);
	free((*d).owner);
	
}
