#include "main.h"

int _prime(int a, int b);
int is_prime_number(int n);

/**
 * is_prime_number - Check if n is a prime number
 *
 * @n: Int
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (_prime(n, 2));
}

/**
 * _prime - Check if b can divide a
 *
 * @a: int to check
 * @b: int
 *
 * Return: 0 if b can, and it's not equal to a of 1,
 * return 1 if b can't divide a iterate else.
 */
int _prime(int a, int b)
{
	if (a % b == 0 && b != 1 && b != a)
	{
		return (0);
	}
	if (b == a)
	{
		return (1);
	}
	return (_prime(a, b + 1));
}
