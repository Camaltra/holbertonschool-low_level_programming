#include "main.h"

/**
 * print_numbers - Print all the numbers between 0-9
 *
 * Return: Anything, cause void function
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
