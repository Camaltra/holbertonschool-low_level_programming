#include <stdio.h>

/**
 * main - Print the alphabet in reverse using printf
 * Return: 0 cause void function
 */
int main(void)
{
	int alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
