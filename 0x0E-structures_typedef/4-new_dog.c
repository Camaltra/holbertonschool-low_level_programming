#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog, return a dog_t type.
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: The pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int length_name, length_owner, i;
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->age = age;
	for (length_name = 0; *(name + length_name); length_name++)
		;
	for (length_owner = 0; *(owner + length_owner); length_owner++)
		;
	new_dog->name = malloc(length_name * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(length_owner * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < length_name; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i < length_owner; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
