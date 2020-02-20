#include "holberton.h"

/**
* _strncat - concatenates two strings, stopping the src string at the nth byte
*
* @src: string to be concatenated to end of dest-- up to src's nth byte
* @dest: string that src is appended to
* @n: number of bytes of src to be concatenated to dest
*
* Return: charpointer to concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int iDest, iSrc;

	for (iDest = 0; ; iDest++)
	{
		if (dest[iDest] == '\0')
		{
			for (iSrc = 0; ; iSrc++, iDest++)
			{
				dest[iDest] = src[iSrc];
				if (iSrc == n - 1 || src[iSrc] == '\0')
					break;
			}
			break;
		}
	}
	return (dest);
}
