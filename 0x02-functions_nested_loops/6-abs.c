#include "main.h"

/**
 * _abs - Verify is the number is positif, in case that not,
 * we give it its absolute value
 *
 * @N: integer to test
 *
 * Return: The absolute value of N
 */
int _abs(int N)
{
	((N < 0) ? (N = -N) : (N));
	return (N);
}
