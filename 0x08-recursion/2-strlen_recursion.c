#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string using recursion
 *
 * @s: String
 *
 * Return: The lenght of the string, 0 if not.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
