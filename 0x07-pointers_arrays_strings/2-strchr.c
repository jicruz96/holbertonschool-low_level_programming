#include "holberton.h"
#include <stddef.h>
/**
* _strchr - locates a character in a string
* @s: string to be searched for the first occurrence of c
* @c: character to be located
* Return: pointer to first occurence of c, or NULL if character not found
**/
char *_strchr(char *s, char c)
{
	while (*s != c)
		if (*s == '\0')
			return (NULL);

	return (s);
}
