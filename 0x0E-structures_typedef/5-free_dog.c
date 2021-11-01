#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the memory of the dog
 *
 * @d: Pointer to dog
 *
 * Return: Anything, cause void function
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
