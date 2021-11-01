#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Print a struct dog
 *
 * @d: Pointer to the struct
 *
 * Return: Anything, cause void function
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}

