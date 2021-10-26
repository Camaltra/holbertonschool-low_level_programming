#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a 2D array fullfiled by 0
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL if any problem, double pointer else (succes)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (!(width > 0) || !(height > 0))
		return (NULL);

	array = (int **)malloc((width * height) * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
