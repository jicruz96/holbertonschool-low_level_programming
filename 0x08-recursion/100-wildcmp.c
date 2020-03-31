#include "holberton.h"
/**
* wildcmp - compares two strings, taking wildcards into account
*
* @s1: first string, compared against s2
* @s2: second string, compared against s1
*
* Return: 1 if strings are identical | 0 if strings are not
*/
int wildcmp(char *s1, char *s2)
{
	if (s2[0] == '*')
	{
		if (s2[1] == '\0')
			return (1);

		if (s2[1] == '*' || s1[0] == '\0')
			return (wildcmp(s1, s2 + 1));
		
		if (s2[1] == s1[0])
			if (wildcmp(s1 + 1, s2 + 2))
				return (1);

		return (wildcmp(s1 + 1, s2));
	}

	if (s2[0] == s1[0])
	{
		if (s2[0] == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
