#include "variadic_functions.h"

/**
 * print_strings - Print all the inputed string
 *
 * @separator: Use to separate the string
 * @n: Number of string
 *
 * Return: Anything, cause void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list _str;

	va_start(_str, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(_str, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(_str);
}
