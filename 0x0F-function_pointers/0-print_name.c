#include "function_pointers.h"

/**
 * print_name - Call a function by a pointer, to print a name.
 *
 * @name: Name to print
 * @f: Function to call
 *
 * Return:m Anyhting, cause void function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
