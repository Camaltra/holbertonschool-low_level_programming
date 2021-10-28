#include "main.h"
#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: Value to reallocate
 * @old_size: Old_size memory
 * @new_size: New size of memory
 *
 * Return: NULL if probleme, the new pointer to the new allocated
 * memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newArray;

	if (ptr == NULL)
		return(malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	newArray = malloc(new_size + 1);
	if (newArray == NULL)
		return (NULL);

	_memcpy(newArray, ptr, old_size);
	free(ptr);

	return (newArray);
}

/**
 * _memcpy - copies memory area.
 *
 * @dest: Destination sting
 * @src: Source string to copies into dest
 * @n: Number of byte to copie
 *
 * Return: Dest string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
