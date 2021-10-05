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
	(N < 0) ? N = -1 * N : N;
	_putchar('0' + N % 10);
	return (N % 10);
}

