#include <stdio.h>

/**
 * 
 * 
 * 
 * 
 */
int main(void)
{
    long n1 = 1, n2 = 2, n3; 
    int i = 0;

    printf("%li, %li", n1, n2);
    while (i < 50)
    {
        n3 = n1 + n2; 
        printf(", %li", n3);
        n1 = n2; 
        n2 = n3; 
        i++;
    }
    printf("\n");
    return (0);
}