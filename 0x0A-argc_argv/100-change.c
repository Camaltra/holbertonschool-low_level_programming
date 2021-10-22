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
	int cents, number_of_piece = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 1)
		printf("0\n");
	else
	{
		cents = atoi(argv[1]);
		while (cents != 0)
		{
			if (cents % 25 == 0)
				cents -= 25, number_of_piece += 1;
			else if (cents % 10 == 0)
				cents -= 10, number_of_piece += 1;
			else if (cents % 5 == 0)
				cents -= 5, number_of_piece += 1;
			else if (cents % 2 == 0)
				cents -= 10, number_of_piece += 1;
			else
				cents -= 10, number_of_piece += 1;
		}
		printf("%d\n", number_of_piece);
	}
	return (0);
}
