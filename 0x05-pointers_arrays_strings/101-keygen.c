#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 
 * 
 * 
 * 
 * 
 * 
 */
int main()
{
    int counter, key; 

    srand(time(NULL));
    for (counter = 2772; counter > 126;)
    {
        key = (rand() % 126); 
        printf("%c", key);
        counter -= key; 
    }
    printf("%c", counter);
    return (0);
}

