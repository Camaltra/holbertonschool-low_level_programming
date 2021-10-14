#include "main.h"

/**
 * reverse_array - Reverse an array of int
 *
 * @a: Array of int
 * @n: Size of the array
 *
 * Return: Anything, cause void function
 */

void reverse_array(int *a, int n)
{
	int start, temporary;

	for (start = 0; n > start; start++, n--)
	{
		temporary = a[start];
		a[start] = a[n];
		a[n] = temporary;
	}
}
