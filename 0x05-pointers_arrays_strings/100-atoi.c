#include "holberton.h"

/**
 * _atoi - converts a string to an integer, based on the first found integer
 * @s: string to convert to integer
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 0, sum = 0, base = 10, check = 0;

	for (; s[i] != '\0' && !(check); i++)
		if (s[i] == '-')
			sign = sign ^ 1;
		else
			for (; s[i] >= '0' && s[i] <= '9' && s[i] != '\0'; i++, check++)
				sum = (sum * base) + (s[i] - '0');

	if (sign)
		return (-sum);
	else
		return (sum);

}
