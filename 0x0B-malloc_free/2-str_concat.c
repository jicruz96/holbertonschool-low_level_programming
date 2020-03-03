#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* str_concat - concatenates two strings
*
* @s1: first string
* @s2: second string
*
* Return: char pointer to concatenated string, or NULL if memory allocation fails
*/

char *str_concat(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	int i;
	char *ptr;

	for (len_s1 = 0; s1[len_s1]; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2]; len_s2++)
		;
	ptr = malloc(len_s1 + len_s2 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		ptr[i] = s1[i];
	for (i = 0; i <= len_s2; i++)
		ptr[len_s1 + i] = s2[i];
	return (ptr);
}
