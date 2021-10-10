#include "main.h"

int _strlen(char *s);
void rev_string(char *s);

/**
 * rev_string - Reverse a string
 *
 * @s: String to reverse
 *
 * Return: Anything, cause void function
 */
void rev_string(char *s)
{
	int length, start, temporary;

	for (start = 0, length = _strlen(s) - 1; length > start; start++, length--)
	{
		temporary = s[start];
		s[start] = s[length];
		s[length] = temporary;
	}
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
