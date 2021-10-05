#include "main.h"

/**
 * _islower - Search if a letter is in upper or lower case
 *
 * @c: The letter test
 *
 * Return: 1 if the letter is lowercase, 0 if uppercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
