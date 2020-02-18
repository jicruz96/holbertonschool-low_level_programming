#include "holberton.h"

/**
* _strlen - returns the length of a string
*
* @s: string to be evaluated
*
* Return: integer representing length of string
*/

int _strlen(char *s)
{
	int strlen;

	while (s[ strlen ])
		strlen++;
	return (strlen);
}
