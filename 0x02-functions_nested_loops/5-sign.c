#include "main.h"

/**
 * print_sign - Print the sign of the inputed number
 *
 * @n: Interger to test
 *
 * Return: 1 positiv, 0 equal to 0, -1 negativ
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
