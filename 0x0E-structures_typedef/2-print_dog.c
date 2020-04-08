#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
*
* @d: struct dog to print
*
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d != NULL)			/* Check if d contains stuff */
	{
		if (d->name != NULL)			/* Print name */
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);		/* Print age */

		if (d->owner != NULL)			/* Print owner */
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
