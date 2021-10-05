#include "main.h"

/**
 * times_table - Print all the tables of multipliacation
 *
 * Return: Anything cause void function
 */
void times_table(void)
{
	int i = 0, j, result;

	while (i < 9)
	{
		j = 0;
		while (j < 10)
		{
			result = j * i;
			if (result >= 10)
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(result + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
	_putchar('\n');
	i++;
	}
}
