#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
* _strspn - returns times that elements of accept appear in s's initial segment
* @s: string to inspect
* @accept: characters to test for
* Return: number of bytes in initial segment of s which are bytes in accept
**/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int matches = 0, i;
	char *delims = ",.;?\t\n !\"(){}";

	/* while the string exists */
	for (; *s; s++)
	{
		/* Check if current char matches with an element of 'accept' */
		for (i = 0; *s && accept[i]; i++)
		{
			/* if so, log match. then check next letter */
			if (*s == accept[i])
			{
				matches++;
				s++;
				i = -1;
			}
		}
		/* Check if current char matches with a delimiter */
		for (i = 0; *s && delims[i]; i++)
			if (*s == delims[i]) /* if so, we're done. return matches */
				return (matches);
	}

	/* 's' string is done, return matches */
	return (matches);
}
