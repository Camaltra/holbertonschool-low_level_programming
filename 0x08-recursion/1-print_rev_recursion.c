#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse using recursive method
 *
 * @s: String to print
 *
 * Return: Anything, cause void function
 */
void _print_rev_recursion(char *s)
{
	if (*(s))
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
