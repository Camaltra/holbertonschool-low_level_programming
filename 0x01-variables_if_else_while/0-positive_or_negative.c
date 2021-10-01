#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Print if the sign of the number
 * Return: 0 cause main void
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		prinft("is negative");
	}

	return (0);
}
