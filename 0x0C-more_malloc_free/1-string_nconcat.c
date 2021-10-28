#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * str_concat - Concatenate 2 string into a new one
 *
 * @s1: Str one
 * @s2: Str two
 * @n: Size that we want to concatenate
 *
 * Return: NULL if probleme, pointer to new str else (succes)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sFinal = NULL;
	unsigned int length1, length2, totalLenght, i;

	if (s1 == NULL)
		length1 = 0;
	else
		length1 = _strlen(s1);

	if (s2 != NULL)
		length2 = _strlen(s2);
	else
		return (s1);

	if (n < length2)
		length2 = n;

	totalLenght = length2 + length1;
	sFinal = (char *)malloc(sizeof(char) * totalLenght + 1);

	if (sFinal == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		*(sFinal + i) = *(s1 + i);
	for (i = 0; i < length2; i++)
		*(sFinal + length1 + i) = *(s2 + i);
	*(sFinal + totalLenght) = '\0';
	return (sFinal);

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
		;
	return (i);
}