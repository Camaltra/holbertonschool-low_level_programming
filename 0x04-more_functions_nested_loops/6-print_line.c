#include "main.h"

/**
 * print_line - Print n time _
 *
 * @n: inputed user number
 *
 * Return: Anything, cause void function
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
