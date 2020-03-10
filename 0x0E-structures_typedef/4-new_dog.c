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
	dog_t *dog = malloc(sizeof(dog_t));
	char *tmpName = malloc((_strlen(name) + 1) * sizeof(char));
	char *tmpOwner = malloc ((_strlen(owner) + 1) * sizeof(char));


	if (dog == NULL || tmpName == NULL || tmpOwner == NULL)
	{
		free(dog);
		free(tmpName);
		free(tmpOwner);
		return (NULL);
	}

	_strcpy(tmpName, name);
	_strcpy(tmpOwner, owner);

	dog->name = tmpName;
	dog->age = age;
	dog->owner = tmpOwner;
	
	return (dog);
}

/**
 * _strlen - finds the length of a string
 * @s: string to find length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strcpy - copies src string to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: void
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}
