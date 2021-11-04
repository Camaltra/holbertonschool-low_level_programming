#include "variadic_functions.h"

/**
 * print_numbers - Print a list of given number, separe by a given separator
 *
 * @separator: Separator between numbers
 * @n: Number of given numbers
 *
 * Return: Anything, cause void function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(numbers);
}
