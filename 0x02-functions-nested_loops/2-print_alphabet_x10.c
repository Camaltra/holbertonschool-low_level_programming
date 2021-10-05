#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times using our function _putchar
 *
 * Return : 0 (succes)
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i = 0;

	while (i < 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
		alphabet = 'a';
	}

}