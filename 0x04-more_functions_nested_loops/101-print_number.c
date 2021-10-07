#include "main.h"

/**
 * print_number - print an inputed number using only _putchar
 *
 * @n: inputed number to print
 *
 * Return: Anuthing, cause void function
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
