#include <stdio.h>
#include <stdlib.h>

int is_integer(char *s);

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
	int i, sum = 0;

	if (argc == 1)
		printf("0");
	for (i = 1; i < argc; i++)
	{
		if (is_integer(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(*(argv + i));
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * is_integer - Check if is an integer
 *
 * @s: String to test
 *
 * Return: 0 if it one, 1 esle.
 */
int is_integer(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) < '0' || *(s + i) > '9')
			return (1);
	}
	return (0);
}
