#include "main.h"

/**
 * print_last_digit - Isolate the last digit of a integer, and print it
 *
 * @N: Integer input
 *
 * Return: The last digits
 */
int print_last_digit(int N)
{
	int last_digit = N % 10;
	((last_digit< 0) ? (last_digit *= -1) : (last_digit));
	_putchar(last_digit + '0');
	return (last_digit);
}

