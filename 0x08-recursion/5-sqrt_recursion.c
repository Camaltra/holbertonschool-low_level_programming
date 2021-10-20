#include "main.h"

int _sqrt(int a, int b);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - Calculate the sqrt of n
 *
 * @n: int inputed
 *
 * Return: the sqrt of n or -1 if n doesn't have one.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Check if the number a got a sqrt
 *
 * @a: Int to check
 * @b: Int to check if it's the sqrt of a
 *
 * Return: b if it's the sqrt of a or -1 if a doesn't have one.
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt(a, b + 1));
}
