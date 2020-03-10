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

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
