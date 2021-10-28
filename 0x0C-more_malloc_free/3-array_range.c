#include "main.h"
#include <stdlib.h>

/**
 * 
 * 
 * 
 * 
 * 
 * 
 */
int *array_range(int min, int max)
{
    int i, sizeOfArray = max - min + 1;
    int *array = NULL;

    if (min > max)
        return (NULL);

    array = malloc(sizeof(int) * sizeOfArray);
    if (array == NULL)
        return (NULL);
    
    for (i = min; i < max + 1; i++)
        *(array + i) = i;
    
    return (array);
}