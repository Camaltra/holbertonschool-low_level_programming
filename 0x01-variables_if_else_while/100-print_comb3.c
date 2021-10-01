#include <stdio.h>

/**
 * main - Print list of number, sorted by a certain sort, without using printf
 * Return: 0 void function
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int e = 48;
	int c = 49;

	while (i < 58)
	{
		while (j < 58)
		{
			if (e < c)
			{
				e++;
			}
			else
			{
				putchar(i);
				putchar(j);
				if (i != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		e = 48;
		c++;
		i++;
		j = 48;
	}
	putchar('\n');
	return (0);
}
