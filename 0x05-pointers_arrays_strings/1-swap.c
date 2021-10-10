#include "main.h"

/**
 * swap_int - Swap the value of 2 integer by their pointers
 *
 * @a: Value to swap
 * @b: Valeue to swap
 *
 * Return: Anything, cause void function
 */
void swap_int(int *a, int *b)
{
	int memory = *a;
	*a = *b;
	*b = memory;
}
