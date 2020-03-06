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
	char *p;					/* declare a char pointer */

	printf("s1 = %s, s2 = %s, n = %d\n", s1, s2, n);
	
	if (s1 == NULL)
	{
		len_s1 = 0;
	}
	else
	{
		for (i = 0, len_s1 = 0; s1[i]; i++, len_s1++)	/* Find memory size to allocate */
			printf("loop %d, len_s1 = %d, s1[%d] = %c\n", i, len_s1, i, s1[i]);
	}

	if (s2 == NULL)
	{
		len_s2 = 0;
	}
	else
	{
		for (i = 0, len_s2 = 0; s2[i]; i++, len_s2++)	/* Find memory size to allocate */
			printf("loop %d, len_s2 = %d, s2[%d] = %c\n", i, len_s2, i, s2[i]);
	}

	printf("FINAL: len_s1 = %d, len_s2 = %d\n", len_s1, len_s2);

	if (len_s2 < n)	/* if strlen(s2) < n, make size fit s1, s2, & null char */
	{
		size = sizeof(char) * (len_s1 + len_s2 + 1);
		printf("len_s2 is < n. size = %d\n", size);
		printf("our expected output is: %s%s\n", s1, s2);
	} 
	else		/* else, make size fit s1, n, and a null char */
	{
		size = sizeof(char) * (len_s1 + n + 1);
		printf("size = %d\n", size);
		printf("our expected output is = %s + the first %d chars of s2\n", s1, n);
	}

	p = malloc(size);				/* allocate memory to p */

	if (p == NULL)					/* if malloc fails, return NULL */
	{
		printf("FAILURE\n");
		return (NULL);
	}

	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)				/* copy s1 onto p */
		{
			p[i] = s1[i];
			printf("s1 loop: p[%d] = %c, s1[%d] = %c\n", i, p[i], i, s1[i]);
		}
	}

	if (s2 != NULL)
	{
		for (j = 0; i < size - 1 && s2[j]; i++, j++)	/* copy up to n bytes of s2 onto p */
		{
			p[i] = s2[j];
			printf("s2 loop: p[%d] = %c, s2[%d] = %c\n", i, p[i], j, s2[j]);
		}
	}

	p[i] = '\0';			/* make last position equal to null */

	printf("p[%d] = NULL, size - i = %d and should equal 1\n", i, size - i);
	
	printf("Done! Returning p, which is:\n%s\n", p);
	
	return (p);					/* return pointer */
}
