#include <stdio.h>

/**
 * main - Print all the arguments inputed
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (succes)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (0);
}
