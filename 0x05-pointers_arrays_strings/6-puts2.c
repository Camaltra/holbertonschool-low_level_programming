#include "main.h"

int _strlen(char *s);

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 *
 * @str: inputed string.
 *
 * Return: Anything, cause void function.
 */
void puts2(char *str)
{
	int length;

	for (length = 0; length < _strlen(str); length++)
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
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
