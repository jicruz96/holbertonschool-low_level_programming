#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
* string_nconcat - concatenates two strings
*
* @s1: first string
* @s2: second string; its first n bytes concatenated to end of s1
* @n: bytes of s2 to concatenate onto s1
*
* Return: always 0, or NULL if malloc fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len;
	char *p;					/* declare a char pointer */

	for (i = 0, len = 1 + n; s1[i]; i++, len++)	/* Find memory size to allocate */
		;

	p = malloc(sizeof(char) * len); 		/* allocate memory */

	if (p == NULL)					/* if malloc fails, return NULL */
		return (NULL);

	for (i = 0; s1[i]; i++)				/* copy s1 onto p */
		p[i] = s1[i];

	for (j = 0; i < len && s2[j]; i++, j++)		/* copy up to n bytes of s2 onto p */
		p[i] = s2[j];

	p[i] = '\0';					/* make last position equal to null */

	return (p);					/* return pointer */
}
