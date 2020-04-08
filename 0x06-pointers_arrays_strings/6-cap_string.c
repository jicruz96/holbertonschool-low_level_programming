#include "holberton.h"

/**
* cap_string - Capitalize all words of a string.
*
* @s: string to be operated on
*
* Return: charpointer to string
*/

char *cap_string(char *s)
{
	int i, test;
	char t[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (s[0] > 96 && s[0] < 123)
		s[0] = s[0] - 32;

	for (i = 1; s[i]; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			for (test = 0; test < 13; test++)
			{
				if (s[i - 1] == t[test])
					s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
