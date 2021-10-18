#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a
 * square matrix of integers
 *
 * @a: Square matrix
 * @size: Size of the square matrix
 *
 * Return: Anything, cause void function
 */
void print_diagsums(int *a, int size)
{
	int row, tmp1, tmp2, sum1 = 0, sum2 = 0;

	for (row = 0; row < size; row++)
	{
		tmp1 = (row * size) + row;
		sum1 += *(a + tmp1);
		tmp2 = (row * size) + (size - 1 - row);
		sum2 += *(a + tmp2);
	}
	printf("%d, %d\n", sum1, sum2);
}
