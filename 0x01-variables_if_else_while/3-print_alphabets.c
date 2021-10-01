#include <stdio.h>

/**
 * main - Print the alphabet in lower, and upper case without using printf
 * Return: 0 cause void function
 */
int main(void)
{
	char alphabetMin = 'a';
    char alphabetMaj = 'A';

	while (alphabetMin <= 'z')
	{
		putchar(alphabetMin);
		alphabetMin++;
	}
	while (alphabetMaj <= 'Z')
	{
		putchar(alphabetMaj);
		alphabetMaj++;
	}
	putchar('\n');
	return (0);
}
