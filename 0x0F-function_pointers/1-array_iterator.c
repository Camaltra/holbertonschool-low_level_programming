#include "function_pointers.h"

/**
 * array_iterator - Print all elements of an array, using
 * a pointer to a function.
 *
 * @array: Array to print
 * @size: Size of the array
 * @action: Pointer to the function that will print
 *
 * Return: Anything, cause void function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
