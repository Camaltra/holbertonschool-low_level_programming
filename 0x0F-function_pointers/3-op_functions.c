#include "3-calc.h"


/**
 * op_add - Add two int
 *
 * @a: int
 * @b: int
 *
 * Return: The result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substract two int
 *
 * @a: int
 * @b: int
 *
 * Return: The result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two int
 *
 * @a: int
 * @b: int
 *
 * Return: The result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two int
 *
 * @a: int
 * @b: int
 *
 * Return: The result of the operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo two int
 *
 * @a: int
 * @b: int
 *
 * Return: The result of the operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
