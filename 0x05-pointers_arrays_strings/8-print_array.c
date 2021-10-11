#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 *
 * @a: Array inputed.
 * @n: Number of elements to print.
 *
 * Return: Anything, cause void function.
 */
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);
		if (counter != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
