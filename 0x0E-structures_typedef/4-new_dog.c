#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* new_dog - makes a new dog
*
* @name: wow, such name
* @age: indeed, very age
* @owner: rly owner
*
* Return: dogecoin
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));

	if (dog == NULL)
		return (NULL);

	if (name != NULL)
	{
		dog->name = name;
	}
	else
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;
	
	if (owner != NULL)
	{
		dog->owner = owner;
	}
	else
	{
		free(dog);
		return (NULL);
	}

	return (dog);
}
