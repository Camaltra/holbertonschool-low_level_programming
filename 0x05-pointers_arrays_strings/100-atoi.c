#include "main.h"

int _strlen(char *s);
int _atoi(char *s);

/**
 * _atoi - Convert the first number of a str to an interger.
 *
 * @s: String inputed.
 *
 * Return: 0 if there are no number, the interger based on the number.
 */
int _atoi(char *s)
{
	int counter, sign = 1;
	unsigned int num = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == '-')
		{
			sign *= -1;
		}
		if (s[counter] >= '0' && s[counter] <= '9')
		{
			break;
		}
	}
	if (counter == _strlen(s) - 1)
	{
		return (0);
	}
	else
	{
		while (s[counter] >= '0' && s[counter] <= '9')
		{
			num = num * 10 + s[counter] - '0';
			counter++;
		}
	}
	if (sign == -1)
	{
		num = -num;
	}
	return (num);
	}
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
	{
	}
	return (i);
}
