#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
* _strchr - locates a character in a string
*
* @s: string to be searched for the first occurrence of c
* @c: character to be located
*
* Return: pointer to first occurence of c, or NULL if character not found
*
*/

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *strchr = s;

	for (i = 0;; i++)
	{
		if (s[i] == c)
		{
			strchr = &s[i];
			break;
		}

		if (!(s[i]))
		{
			strchr = NULL;
			break;
		}
	}
	return (strchr);
}
