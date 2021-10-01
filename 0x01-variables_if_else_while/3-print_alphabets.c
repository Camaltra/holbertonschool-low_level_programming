#include <stdio.h>

/**
 * main - Print the alphabet in lower, and upper case without using printf
 * Return: 0 cause void function
 */
int main(void)
{
	char alphabetMinn = 'a';
	char alphabetMaj = 'A';

	while (alphabetMinn <= 'z')
	{
		putchar(alphabetMinn);
		alphabetMinn++;
	}
	while (alphabetMaj <= 'Z')
	{
		putchar(alphabetMaj);
		alphabetMaj++;
	}
	putchar('\n');
	return (0);
}
