#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct format_str
 *
 * @type: Type of the argu
 * @f: Pointer to function to print argu
 */
typedef struct format_str
{
	char *type;
	void (*f)(va_list);
} format_str;


int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
