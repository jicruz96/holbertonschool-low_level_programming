#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
* _strstr - searches for sub-string within a string
* @haystack: string to be searched for sub-string needle
* @needle: sub-string to be searched within string haystack
* Return: pointer to 1st occurence of needle, or NULL if no match
**/

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *haystack; haystack++)
		for (i = 0; haystack[i] == needle[i]; i++)
			if (needle[i + 1] == '\0')
				return (haystack);
	return (NULL);
}
