#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: Destination
 * @src: Source
 *
 * Return: Anything, cause void function.
 */
char *_strcpy(char *dest, char *src)
{
	int counter, length = _strlen(src);

	for (counter = 0; counter <= length; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
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
