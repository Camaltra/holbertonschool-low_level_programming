#include <stdio.h>

/**
 * main - Print a quote withou using printf or puts
 * Return: 0 cause it's a void function
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	return (0);
}
