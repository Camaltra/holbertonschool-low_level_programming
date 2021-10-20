#include "main.h"

/**
 * _puts_recursion - Reacreate puts function with recursive method
 *
 * @s: String to print
 *
 * Return: Anything, cause void function
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s))
	{
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
