#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: String to analyse
 * @c: charactere to search
 *
 * Return: Adress of the charactere if found, NULL else
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (0);
}
