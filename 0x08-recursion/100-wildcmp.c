#include "holberton.h"
/**
* wildcmp - compares two strings, taking wildcards into account
*
* @s1: first string, compared against s2
* @s2: second string, compared against s1
*
* Return: integer describing relation between s1 & s2
*/

int wildcmp(char *s1, char *s2)
{
	int i, j, ast, count;
	char *s3 = s1;

	for (i = 1; *s1 != 0 || *s2 != 0; i++)
	{
		while (*s2 == 42)
			s2++;
		for (j = 0, ast = 0; *(s2 + j) != 0 && *(s2 + j) != '\0'; j++)
			if (*(s2 + j) == 42)
				ast++;
		if (ast == 0)
		{
			for (j = 0; s1[j] != 0 && s1[j] != '\0'; j++)
			{
				if (s1[j] == *s2)
				{
					count++;
					s3 = &s1[j];
				}
			}
			if (count == 0 && (s2 == 0 || s2 == '\0'))
				s3 = &s1[++j];
			s1 = s3;
		}
		if (*s1 == 0)
			break;
		while (*s1 != *s2 && *(s2 - 1) == 42)
			s1++;
		if (*s1 != *s2 || *s2 == 0)
			break;
		s1++;
		s2++;
		if (*s1 == 0)
			break;
	}
	while (*s2 == 42)
		s2++;
	if (*s1 - *s2 == 0)
		return (1);
	return (0);
}
