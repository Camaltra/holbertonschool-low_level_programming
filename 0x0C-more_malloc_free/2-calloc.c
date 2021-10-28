#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Recode the calloc function
 *
 * @nmemb: Length of the array that contain pointers
 * @size: Size of the elements pointed
 *
 * Return: NULL if any problem, pointer to the array else (succes)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **pointer_to_array;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	pointer_to_array = malloc(nmemb);
	if (pointer_to_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		pointer_to_array[i] = malloc(size);
		if (pointer_to_array[i] == NULL)
		{
			for ( ; i; i--)
				free(pointer_to_array[i]);
			free(pointer_to_array);
			return (NULL);
		}
	}
	return (pointer_to_array);
}
