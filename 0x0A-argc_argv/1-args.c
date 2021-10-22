#include <stdio.h>

/**
 * main - Print the number of imported arguments
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (succes)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
