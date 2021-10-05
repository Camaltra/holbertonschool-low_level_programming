#include "main.h"

/**
 * times_table - Print all the tables of multipliacation
 *
 * Return: Anything cause void function
 */
void print_times_table(int n)
{
	int i = 0, j, result;

    if (n < 0 && n > 15)
    {
	    while (i <= n)
	    {
		    _putchar(48);
		    j = 1;
		    while (j < n)
		    {
			    _putchar(',');
			    _putchar(' ');
			    result = j * i;
                if (result >= 100)
			    {
                    _putchar((result / 100) + 48);
				    _putchar((result / 10) + 48);
				    _putchar((result % 10) + 48);
			    }
			    if (result >= 10)
			    {
                    _putchar(' ');
				    _putchar((result / 10) + 48);
				    _putchar((result % 10) + 48);
			    }
			    else
			    {
				    _putchar(' ');
				    _putchar(result + 48);
			    }
			    j++;
		    }
	    _putchar('\n');
	    i++;
	    }
    }
}
