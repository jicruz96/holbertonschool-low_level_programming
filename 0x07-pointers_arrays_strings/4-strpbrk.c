#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
* _strpbrk - searches string for first match with any element from accept
* @s: string to be searched
* @accept: elements to be searched for
* Return: pointer to 1st occurence of an element of accept, or NULL if no match
**/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);

	return (NULL);
}
