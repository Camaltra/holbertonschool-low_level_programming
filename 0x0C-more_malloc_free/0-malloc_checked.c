#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate a space in a memory
 *
 * @b: Size of space that we want alloocate
 *
 * Return: The pointer on the allocate space (succes), exit
 * with the code 98 if any probleme.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer_to_allocSpace = NULL;

	pointer_to_allocSpace = malloc(b);
	if (pointer_to_allocSpace == NULL)
		exit(98);
	return (pointer_to_allocSpace);
}
