#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array with is fulfilled by a char
 *
 * @size: Size of the array
 * @c: Char
 *
 * Return: NULL if any probleme, pointer to array else (succes)
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(array + i) = c;
	return (array);
}
