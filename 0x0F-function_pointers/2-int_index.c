#include "function_pointers.h"

/**
 * int_index - That searches for an integer.
 *
 * @array: Array of int
 * @size: Size of the array
 * @cmp: Function that test integer
 *
 * Return: Index of the first integer that verify the test.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
