#include "main.h"

/**
 * _isupper - Test if a inputed char is upper case
 *
 * @c: inputed number to test
 *
 * Return: 1 if it's upper, 0 else
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
