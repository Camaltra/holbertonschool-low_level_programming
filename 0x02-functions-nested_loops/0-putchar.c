#include "_putchar.c"

/**
 * main - Print "_putchar" using our function _putchar
 *
 * Return : 0 (succes)
 */

int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	while (i != 7)
	{
		_putchar(text[i]);
		i++;
	}

	return (0);
}
