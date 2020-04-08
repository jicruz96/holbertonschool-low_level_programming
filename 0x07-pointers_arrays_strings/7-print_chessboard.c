#include "holberton.h"

/**
* print_chessboard - prints a 2D, 8x8 grid
*
* @a: 8x8 array to take in as argument
*
* Return: void
*
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar(10);
	}
}
