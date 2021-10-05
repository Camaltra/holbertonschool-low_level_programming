#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase using our function _putchar.
 *
 * Return : 0 (succes).
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
