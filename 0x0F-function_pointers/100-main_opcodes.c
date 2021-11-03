#include "function_pointers.h"
#include <stdio.h>

void print_byte(char *function, int n);

/**
 * main - Prints the opcodes of its own main function
 *
 * @argc: Number of arg
 * @argv: Array of arg
 *
 * Return: 0 (succes)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_byte((char *)&main, atoi(argv[1]));
	return (0);
}

/**
 * print_byte - Print byte un hexadecimal, in 2 byte.
 *
 * @function: Function to print
 * @n: Number of opcodes we want
 *
 * Return: Anything, cause void functio
 */
void print_byte(char *function, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", function[i]);
		if (i < n - 1)
			putchar(' ');
	}
	putchar('\n');
}
