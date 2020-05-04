#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
* _strpbrk - searches string for first match with any element from accept
*
* @s: string to be searched
* @accept: elements to be searched for
*
* Return: pointer to 1st occurence of an element of accept, or NULL if no match
*
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *strpbrk = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;

		while (s[i] != accept[j] && accept[j] != '\0')
			j++;

		if (s[i] == accept[j])
		{
			strpbrk = &s[i];
			break;
		}
	}
	return (strpbrk);
}
