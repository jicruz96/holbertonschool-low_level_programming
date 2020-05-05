#include "holberton.h"

/**
* _strcmp - compares two strings
* @s1: first string, compared against s2
* @s2: second string, compared against s1
* Return: integer describing relation between s1 & s2
**/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
		if (!s1)
			break;

	return (*s1 - *s2);
}
