#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: Destination sting
 * @src: Source string to copies into dest
 * @n: Number of byte to copie
 *
 * Return: Dest string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
