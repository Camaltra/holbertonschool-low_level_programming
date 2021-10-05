#include <stdio.h>

/**
 * 
 * 
 * 
 * 
 */
int main(void)
{
    int n1 = 1, n2 = 2, i = 0, n3; 

    printf("%d, %d", n1, n2);
    while (i < 50)
    {
        n3 = n1 + n2; 
        printf(", %d", n3);
        n1 = n2; 
        n2 = n3; 
        i++;
    }
    printf("\n");
    return (0);
}