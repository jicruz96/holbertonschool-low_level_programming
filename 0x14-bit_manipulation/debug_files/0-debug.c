#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * 
 * @b: binary number
 *
 * Return: converted number | 0 if input isn't binary number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, n = 0, power = -1, multiplier, tmp;

	printf("\t\t\t=======WELCOME TO BIN2DEC=======\n");
	printf("Let's convert %s to binary!\n", b);
	printf("0. Checking if input is null...\n");
	if (b == NULL)
	{
		printf("NULL INPUT. ABORT!\n");
		return (0);
	}
	printf("1. Checking magnitude of number...\n");
	for (; b[i]; i++, power++)
	{
		printf("\tLoop #%d\n", i);
		if ((b[i] != '1') && (b[i] != '0'))
		{
			printf("=====FAKE NUMBER DETECTED. ABORT=====\n");
			return (0);
		}
	}
	printf("\tDone! This number has %d digits.\n\n\n", power + 1);
	printf("2. Let's convert the number!\n");
	if (power != -1)
	{
		i = 0;
		while (b[i])
		{
			printf("\tChecking b[%d]...\n", i);
			multiplier = power;
			tmp = 1;
			if (b[i] == '1')
			{
				printf("\t\tMatch! Let's update n...\n");
				while (multiplier)
				{
					tmp *= 2;
					multiplier--;
				}
				printf("\t\tWe will add %d to %d...\n", tmp, n);
				n += tmp;
			}
			power--;
			i++;
			printf("\tn = %d | %d more digits to check!\n", n, power + 1);
		}
	}
	printf("\tNumber converted! %s in decimal is %d\nReturning...\n", b, n);
	return (n);
}
