#include "holberton.h"
#include <stdio.h>
/**
* _strcat - concatenates two strings
*
* @src: string to be concatenated to end of dest
* @dest: string that src is appended to
*
* Return: charpointer to concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int iDest, iSrc;

	for (iDest = 0; ; iDest++)
	{
		if (dest[iDest] == '\0')
		{
			printf("iDest: %d\n", iDest);
			for (iSrc = 0; ; iSrc++)
			{
				dest[iDest] = src[iSrc];
				iDest++;
				printf("%s\n",dest);
				if (src[iSrc] == '\0')
					break;
				printf("you're in the second for loop for the %dth time\n", iSrc);
			}
			break;
		}
	printf("you're in the for loop for the %dth time\n", iDest);
	}
	return (dest);
}
