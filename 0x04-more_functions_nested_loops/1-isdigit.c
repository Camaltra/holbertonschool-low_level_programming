#include "main.h"

/**
 * _isdigit - Test if a inputed char is a number
 *
 * @c: Input to test
 *
 * Return: 1 if it's a number, 0 else
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
