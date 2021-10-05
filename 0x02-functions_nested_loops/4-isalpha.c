#include "main.h"

/**
 * _isalpha - Check is the input is a letter or not.
 *
 * @c: parameter to test.
 *
 * Return: 1 if the input is a letter, 0 else.
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 65 && c < 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
