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

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
