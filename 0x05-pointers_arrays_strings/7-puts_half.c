#include "main.h"

int _strlen(char *s);
void puts_half(char *str);

/**
 * puts_half - prints the second half of a string.
 *
 * @str: Sting inputed.
 *
 * Return: Anything, cause void function.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int half;

	for (half = (length + 1) / 2; half < length; half++)
	{
		_putchar(str[half]);
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
