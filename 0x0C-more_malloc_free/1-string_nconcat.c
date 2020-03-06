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
	unsigned int i, j;
	unsigned int len_s1, len_s2, size;
	char *p;				/* declare a char pointer */
	
	if (s1 == NULL)		/* Check if s1 is NULL; if not, find strlen(s1) */
		len_s1 = 0;
	else
		for (i = 0, len_s1 = 0; s1[i]; i++, len_s1++)
			;	
	if (s2 == NULL)		/* Check if s2 is NULL; if not, find strlen(s2) */
		len_s2 = 0;
	else
		for (i = 0, len_s2 = 0; s2[i]; i++, len_s2++)
			;
	/* 
	* If both strings are empty or null, make the size of memory = 0;
	* otherwise, check if memory size needs to fit up to n bytes of s2
	* or all of s2 and adjust the value of size accordingly
	*/
	if (len_s1 + len_s2 == 0)
		size = 0;
	else if (len_s2 < n)	/* If strlen(s2) < n; size fits s1, s2, & a null char */
		size = sizeof(char) * (len_s1 + len_s2 + 1);
	else			/* else, make size fit s1, n bytes of s2, and a null char */
		size = sizeof(char) * (len_s1 + n + 1);

	p = malloc(size);	/* allocate memory to p */

	if (p == NULL)		/* if malloc fails, return NULL */
		return (NULL);

	if (s1 != NULL)		/* copy s1 onto p */
		for (i = 0; s1[i]; i++)
			p[i] = s1[i];

	if (s2 != NULL)		/* copy s2 onto p until one memory space is left */
		for (j = 0; i < size - 1 && s2[j]; i++, j++)
			p[i] = s2[j];

	if (len_s1 + len_s2 != 0)	/* make last position equal to null */
		p[i] = '\0';
	
	return (p);		/* return pointer */
}
