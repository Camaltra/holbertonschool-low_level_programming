#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print a struct dog
 *
 * @d: Pointer to the struct
 *
 * Return: Anything, cause void function
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
