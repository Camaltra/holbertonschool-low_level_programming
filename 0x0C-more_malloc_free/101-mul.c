#include "main.h"
#include <sdlib.h>

/**
 * 
 * 
 * 
 * 
 * 
 * 
 */
int main(int argc, char *argv[])
{
    int i, j, lengthMax;
    int *finalRes;
    
    if (argc != 3)
    {
        putword("Error\n");
        exit(98);
    }
    
    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < _strlen(argv[i]); j++)
        {
            if !(argv[i][j] >= 0 && argv[i][j] <= 9)
            {
                putword("Error\n");
                exit(98);
            }
        }
    }
    lenghtMax = (_strlen(argv[1]) + _strlen(argv[2]));
    finalRes = malloc(sizeof(int) * lenghtMax);
    if (finalRes == NULL)
        return(NULL);
    


}

void putword(char *str)
{
    while(*str++)
        _putchar(*str);
}

void error()
{
    putword("Error\n");
    exit(98);
} 