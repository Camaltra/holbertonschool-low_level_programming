#include <stdio.h>

/**
 * main - Print the name of the function
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (succes)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
