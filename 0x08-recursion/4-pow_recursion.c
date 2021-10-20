#include "main.h"

/**
 * _pow_recursion - Calculate the power of an number using recursion
 *
 * @x: Int to raise to the power y
 * @y: The poweer of x
 *
 * Return: x raise to the power y, -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
