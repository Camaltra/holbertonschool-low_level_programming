#include "main.h"
#include <stdio.h>

/**
 * _strstr - that locates a substring
 *
 * @haystack: String to test
 * @needle: First occurence of this substring
 *
 * Return: Adress of the first occurence if exist, else 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (*(haystack + i))
	{
		while (*(needle + j) && (*(haystack + i + j) == *(needle + j)))
		{
			j++;
		}
		if (*(needle + j))
		{
			j = 0;
			i++;
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
