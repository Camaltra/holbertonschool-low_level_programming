#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if succes, 1 else
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
			if (cents >= 25)
				cents -= 25, number_of_piece += 1;
			else if (cents >= 10)
				cents -= 10, number_of_piece += 1;
			else if (cents >= 5)
				cents -= 5, number_of_piece += 1;
			else if (cents >= 2)
				cents -= 2, number_of_piece += 1;
			else if (cents >= 1)
				cents -= 1, number_of_piece += 1;
		}
		printf("%d\n", number_of_piece);
	}
	return (0);
}
