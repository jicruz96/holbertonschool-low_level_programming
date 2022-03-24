#include "holberton.h"


#define IS_ONE(x) ((x) == '1')
#define IS_ZERO(x) ((x) == '0')
#define IS_BINARY(x) (IS_ONE(x) || IS_ZERO(x))

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary number
 *
 * Return: converted number | 0 if input isn't binary number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n;

	if (b == NULL)
		return (0);

	for (i = 0, n = 0; b[i]; i++)
	{
		if (!IS_BINARY(b[i]))
			return (0);
		n = (n << 1) + IS_ONE(b[i]);
	}

	return (n);
}
