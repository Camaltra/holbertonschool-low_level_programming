#include "main.h"

int _strlen(char *s);
void print_rev(char *s);

/**
 * print_rev - Print in reverse an inputed str.
 *
 * @s: Pointer to a str.
 *
 * Return: Anything, cause void function.
 */
void print_rev(char *s)
{
	int length;

	for (length = _strlen(s); length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}

/**
 * _strlen - Calculate the length of a string.
 *
 * @s: String to manipulate.
 *
 * Return: The length of the inputed string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
