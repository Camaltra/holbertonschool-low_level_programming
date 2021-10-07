#include "main.h"

/**
 * print_diagonal - Print a n diagonal using \
 *
 * @n: Height of the diagonal
 *
 * Return: Anything, cause void function
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = i;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
