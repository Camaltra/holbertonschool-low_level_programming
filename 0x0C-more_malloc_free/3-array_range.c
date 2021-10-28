#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: First integer
 * @max: Last integer
 *
 * Return: NULL if probleme, pointer to the array else
 */
int *array_range(int min, int max)
{
	int i, sizeOfArray = max - min + 1;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * sizeOfArray);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < sizeOfArray; i++, min++)
		*(array + i) = min;

	return (array);
}
