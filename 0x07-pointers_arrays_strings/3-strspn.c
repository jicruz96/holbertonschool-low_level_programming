#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
* _strspn - returns times that elements of accept appear in s's initial segment
*
* @s: string to inspect
* @accept: characters to test for
*
* Return: number of bytes in initial segment of s which are bytes in accept
*
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, segment;
	char sprtr[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (segment = 0; s[segment] != '\0'; segment++)
	{
		j = 0;

		while (s[segment] != sprtr[j] && sprtr[j] != '\0')
			j++;

		if (s[segment] == sprtr[j])
			break;
	}

	for (i = 0; i < segment; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
