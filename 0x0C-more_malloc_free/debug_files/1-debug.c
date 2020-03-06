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

	printf("s1 = %s, s2 = %s, n = %d\n", s1, s2, n);
	
	if (s1 == NULL)		/* Check if s1 is NULL; if not, find strlen(s1) */
	{
		len_s1 = 0;
		printf("s1 is NULL, len_s1 = 0\n");
	}
	else
	{
		for (i = 0, len_s1 = 0; s1[i]; i++, len_s1++)
			printf("loop %d, len_s1 = %d, s1[%d] = %c\n", i, len_s1, i, s1[i]);
	}

	if (s2 == NULL)		/* Check if s2 is NULL; if not, find strlen(s2) */
	{
		len_s2 = 0;
		printf("s2 is NULL, len_s2 = 0\n");
	}
	else
	{
		for (i = 0, len_s2 = 0; s2[i]; i++, len_s2++)
			printf("loop %d, len_s2 = %d, s2[%d] = %c\n", i, len_s2, i, s2[i]);
	}

	printf("FINAL: len_s1 = %d, len_s2 = %d\n", len_s1, len_s2);

	/* 
	* If both strings are empty or null, make the size of memory = 0;
	* otherwise, check if memory size needs to fit up to n bytes of s2
	* or all of s2 and adjust the value of size accordingly
	*/

	if (len_s1 + len_s2 == 0)
	{
		size = 0;
		printf("Both strings are empty or null, size = 0\n");
	}
	else if (len_s2 < n)	/* If strlen(s2) < n; size fits s1, s2, & a null char */
	{
		size = sizeof(char) * (len_s1 + len_s2 + 1);
		printf("len_s2 is < n. size = %d\n", size);
		printf("our expected output is: %s%s\n", s1, s2);
	} 
	else			/* else, make size fit s1, n bytes of s2, and a null char */
	{
		size = sizeof(char) * (len_s1 + n + 1);
		printf("size = %d\n", size);
		printf("our expected output is = %s + the first %d chars of s2\n", s1, n);
	}

	p = malloc(size);	/* allocate memory to p */

	if (p == NULL)		/* if malloc fails, return NULL */
	{
		printf("FAILURE\n");
		return (NULL);
	}

	if (s1 != NULL)		/* copy s1 onto p */
	{
		for (i = 0; s1[i]; i++)
		{
			p[i] = s1[i];
			printf("s1 loop: p[%d] = %c, s1[%d] = %c\n", i, p[i], i, s1[i]);
		}
	}

	if (s2 != NULL)		/* copy s2 onto p until one memory space is left */
	{
		for (j = 0; i < size - 1 && s2[j]; i++, j++)
		{
			p[i] = s2[j];
			printf("s2 loop: p[%d] = %c, s2[%d] = %c\n", i, p[i], j, s2[j]);
		}
	}

	if (len_s1 + len_s2 != 0)	/* make last position equal to null */
	{
		p[i] = '\0';
		printf("Putting a null!\n");
	}			

	printf("p[%d] = %c, size - i = %d and should equal 1\n", i, p[i], size - i);
	
	printf("Done! Returning p, which is:\n%s\n", p);
	
	return (p);		/* return pointer */
}
