#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the sum of 2 inputed arguments
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 1 if not 2 arg inputed, 0 success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
		return (0);
	}
}
