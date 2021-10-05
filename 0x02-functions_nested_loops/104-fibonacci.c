#include <stdio.h>

/**
 * main - Print all the first 100 fibonacci numbers whitout using
 * long long int or not usual library
 *
 * Return: 0 (succes)
 */
int main(void)
{
	unsigned long n1 = 1, n2 = 2, n3;
	unsigned long n1a, n1b, n2a, n2b, n3a, n3b;
	int i = 2;

	n3 = n1 + n2;

	printf("%li, ", n1);
	printf("%li, ", n2);
	while (i < 92)
	{
		printf("%li, ", n3);
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
		i++;
	}
	n2a = n2 / 1000000000;
	n2b = n2 % 1000000000;
	n3a = n3 / 1000000000;
	n3b = n3 % 1000000000;
	while (i < 98)
	{
		printf("%li%li, ", n3a, n3b);
		n1a = n2a;
		n1b = n2b;
		n1a = n2a;
		n1b = n2b;
		n3a =  n1a + n1b + ((n2a + n2b) / 1000000000);
		n3b = (n2a + n2b) % 1000000000;
		i++;
	}
	printf("%li%li\n", n3a, n3b);
	return (0);
}
