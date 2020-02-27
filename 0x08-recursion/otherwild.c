#include "holberton.h"
#include <stdio.h>
#include <stddef.h>
/**
* _wildcmp - compares two strings, taking wildcards into account
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

	printf("--------------  s1 = %s  s2 = %s  --------------\n", s1, s2);
	for (i =1; *s1 != 0 || *s2 != 0;i++)
	{
		printf("phase %d commence!\n", i);
		while (*s2 == 42)
		{
			s2++;
			printf("asterisk skip phase %d: s2 = %s\n", i, s2);
		}
		printf("exited asterisk skip phase %d\n", i);
		for (j = 0, ast = 0; *(s2 + j) != 0 && *(s2 + j) != '\0'; j++)
		{
			if (*(s2 + j) == 42)
				ast++;
			printf("counting upcoming asterisks... %d\n", ast);
		}	
		printf("exited asterisk count phase %d. ast = %d\n", i, ast);
		if (ast == 0)
		{
			printf("last asterisk detected! adjusting s1...\n");
			printf("BEFORE: s1 = %s  s2 = %s\n", s1, s2);
			for (j = 0; s1[j] != 0 && s1[j] != '\0'; j++)
			{
				printf("In s1 adjust loop...\n");
				if (s1[j] == *s2)
				{	printf("counting...\n");
					count++;
					s3 = &s1[j];
					printf("s3 = %s\n", s3);
				}
			}
			printf("exited adjust loop. s1 = %s  s2 = %s s3 = %s\n", s1, s2, s3);
			if (count == 0 && (s2 == 0 || s2 == '\0'))
				{
					printf("i guess we're here\n");
					s3 = &s1[++j];
				}
			s1 = s3;
			printf("AFTER: s1 = %s  s2 = %s\n", s1, s2);
		}
		if (*s1 == 0)
			break;

		while (*s1 != *s2 && *(s2 - 1) == 42)
		{
			s1++;
			printf("match phase %d: s1 = %s  s2 = %s\n", i, s1, s2);
		}
		printf("exited match phase %d\n", i);
		printf("phase %d complete s1 = %d s2 = %d\n", i, *s1, *s2);
		if (*s1 != *s2)
		{	printf("Not a match!\n");
			break;
		}
		else
		{
			if (*s2 == 0)
				break;
			s1++;
			s2++;
			if (*s1 == 0)
				break;
		}
	}
	printf("final ast check: s1 = %s  s2 = %s\n\n", s1, s2);
	while (*s2 == 42)
	{
		s2++;
	}
	printf("final: s1 = %s  (%p)  s2 = %s  (%p)\n\n", s1, s1, s2, s2);
	if (*s1 - *s2 == 0)
		return (1);
	else
		return (0);
}
