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
	int half, counter, length = _strlen(str);

	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2;
	}
	for (counter = half; counter < length; counter++)
	{
		_putchar(str[counter]);
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
