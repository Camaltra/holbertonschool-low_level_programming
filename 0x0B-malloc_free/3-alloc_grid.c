#include "main.h"
#include <stdlib.h>

/**
 * 
 * 
 * 
 * 
 */
int **alloc_grid(int width, int height)
{
    int **array;
    int i, j;

    if (!(width > 0) || !(height > 0))
        return (NULL);
    
    array = (int **)malloc((width * height) * sizeof(int*));
    for (i = 0; i < height; i++)
    {
        array[i] = (int *)malloc(width * sizeof(int));
        
        for (j = 0; j < width; j++)
        {
            if (array[j] == NULL)
            {
                free(array[j]);
            }
        }
        
        for (j = 0; j < width; j++)
        {
           array[i][j] = 0; 
        }
    }
    return (array);

}