#include "3-calc.h"

/**
 * get_op_func - Give the good function to make the opération
 *
 * @s: Operator
 *
 * Return: The good function, NULL else.
 */
int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
