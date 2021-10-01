#include <stdio.h>

/**
 * main - Print all the digit in base 10 using putchar
 * Return: 0 void function
 */
int main(void)
{
	int digit = 48;
	char alphabet = 'a';

	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}

	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
