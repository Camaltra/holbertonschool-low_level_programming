#include <unistd.h>

/**
 * main - Print a quote without using printf or puts, using write from unistd.h
 * Return: 0 cause it's a void function
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
