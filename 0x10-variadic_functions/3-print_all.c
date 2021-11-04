#include "variadic_functions.h"


void print_int(va_list);
void print_float(va_list);
void print_char(va_list);
void print_str(va_list);


/**
 * print_all - Print all type of given argu
 *
 * @format: sting that containt the type of the given argu
 *
 * Return: ANything, cause void function.
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator = "";

	va_list print;

	format_str p[] = {
	{"c", print_char},
	{"s", print_str},
	{"i", print_int},
	{"f", print_float},
	{NULL, NULL}
	};

	va_start(print, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (p[j].type)
		{
			if (*p[j].type == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				p[j].f(print);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(print);
	putchar('\n');
}

/**
 * print_int - Print an int
 *
 * @print: The argu to print
 *
 * Return: Anything, cause void function
 */
void print_int(va_list print)
{
	printf("%d", va_arg(print, int));
}

/**
 * print_float - Print a float
 *
 * @print: The argu to print
 *
 * Return: Anything, cause void function
 */
void print_float(va_list print)
{
	printf("%f", va_arg(print, double));
}

/**
 * print_char - Print a char
 *
 * @print: The argu to print
 *
 * Return: Anything, cause void function
 */
void print_char(va_list print)
{
	printf("%c", va_arg(print, int));
}

/**
 * print_str - Print a str
 *
 * @print: The argu to print
 *
 * Return: Anything, cause void function
 */
void print_str(va_list print)
{
	char *str = va_arg(print, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
