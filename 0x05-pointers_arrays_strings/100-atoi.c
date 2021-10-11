#include "main.h"

int _strlen(char *s);
int _atoi(char *s);

/**
 * 
 * 
 * 
 * 
 * 
 */
int _atoi(char *s)
{
    int counter, sign = 1; 
    unsigned int num = 0; 

    for (counter = 0; s[counter] != '\0'; counter++)
    {
        if (s[counter] >= '0' && s[counter] <= '9')
        {
            if (s[counter -1] == '-')
            {
                sign = - 1;
            }
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
            num = num*10 + s[counter] - '0';
            counter++;
        }
    if (sign == - 1)
    {
        num = - num;
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
