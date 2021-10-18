#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: Buffer adress
 * @b: Constant byte to fill memory
 * @n: Number of contant byte to fill
 *
 * Return: The buffer adress.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
