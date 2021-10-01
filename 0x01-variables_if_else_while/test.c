#include <stdio.h>

/**
 * main - Print list of number, sorted by a certain sort, without using printf
 * Return: 0 void function
 */
int main(void)
{
    int i = 48; 
    int j = 49;
    int k = 50;
    int jJ = 50;
    int kK = 51;

    while (i < 58)
    {
        while(j < 58)
        {
            while(k < 58)
            {
                putchar(i);
                putchar(j);
                putchar(k);
                putchar(' ');
                k++;
            }
            j++;
        }
        i++;
        j = jJ;
        jJ++;
        k = kK;
        kK++;
    }
   return (0);
}
