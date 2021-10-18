#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: String to test
 * @accept: Substring
 *
 * Return: Adress of the first occurance of the substring
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (0);
}
