#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: First integer
 * @max: Last integer
 *
 * Return; NULL if probleme, pointer to the array else
 */
int *array_range(int min, int max)
{
	int i, sizeOfArray = max - min;
	int *array = NULL;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * sizeOfArray);
	if (array == NULL)
		return (NULL);

	for (i = min; i < max + 1; i++)
		*(array + i) = i;

	return (array);
}
