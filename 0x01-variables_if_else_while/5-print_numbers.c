#include <stdio.h>

/**
 * main - Print all digit of a base 10 number
 * Return: 0 cause void function
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
