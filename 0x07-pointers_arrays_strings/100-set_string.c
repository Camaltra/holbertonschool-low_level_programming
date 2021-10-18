#include "main.h"
#include <stdio.h>

/**
 * set_string - the value of a pointer to a char.
 *
 * @s: Adress of the pointer of the first string.
 * @to: Adress of the second string.
 *
 * Return: Anything, cause void function
 */
void set_string(char **s, char *to)
{
	*s = to;
}
