#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Create a Keygen for 101-crackme
 * 
 * Return: 0 (succes)
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

