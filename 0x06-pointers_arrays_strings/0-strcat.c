#include "holberton.h"

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
			for (iSrc = 0; ; iSrc++, iDest++)
			{
				dest[iDest] = src[iSrc];
				if (src[iSrc] == '\0')
					break;
			}
			break;
		}
	}
	return (dest);
}
