#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* free_grid - frees the memory space of the array formed by alloc_grid
*
* @grid: pointer to array we want to free
* @height: height of array
*
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
