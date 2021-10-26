#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: Pointer to 2D array
 * @height: Heigth of 2D array
 *
 * Return: Anything, cause void function
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
