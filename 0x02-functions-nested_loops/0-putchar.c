#include "main.h"

/**
 * main - Print "_putchar" using our function _putchar
 *
 * Return : 0 (succes)
 */
int main(void)
{
	char text[8] = "_putchar";
	int i = -1;

	while (i != 8)
	{
		_putchar(text[i++]);
	}
	_putchar('\n');

	return (0);
}
