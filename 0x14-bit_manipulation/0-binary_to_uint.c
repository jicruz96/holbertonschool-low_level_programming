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

	if (b == NULL)
		return (0);

	for (; b[i]; i++, power++)
		if ((b[i] != '1') && (b[i] != '0'))
			return (0);

	if (power != -1)
	{
		i = 0;
		while (b[i])
		{
			multiplier = power;
			tmp = 1;
			if (b[i] == '1')
			{
				while (multiplier)
				{
					tmp *= 2;
					multiplier--;
				}
				n += tmp;
			}
			power--;
			i++;
		}
	}

	return (n);
}
