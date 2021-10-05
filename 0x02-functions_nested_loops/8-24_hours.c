#include "main.h"

/**
 * 
 * 
 * 
 * 
 */
void jack_bauer(void)
{
    int i = 0, j;
    while (i < 24)
    {
        j = 0;
        while (j < 60)
        {
            _putchar((i / 10) + 48);
            _putchar((i % 10) + 48);
            _putchar(':');
            _putchar((j / 10) + 48);
            _putchar((j % 10) + 48);
            _putchar('\n');
            j++;
        }
    i++;
    }
}