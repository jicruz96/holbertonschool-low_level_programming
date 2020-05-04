#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
* _strstr - searches for sub-string within a string
*
* @haystack: string to be searched for sub-string needle
* @needle: sub-string to be searched within string haystack
*
* Return: pointer to 1st occurence of needle, or NULL if no match
*
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	char *strstr = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			strstr = &haystack[i];
			break;
		}
	}
	return (strstr);
}
