#include "main.h"

/**
 * _puts - Print a str , and adding a new line.
 *
 * @str: str to print.
 *
 * Return: Anything, cause void function.
 */


void _puts(char *str)
{
	int character;

	for (character = 0; str[character] != '\0'; character++)
	{
		_putchar(str[character]);
	}
	_putchar('\n');
}
