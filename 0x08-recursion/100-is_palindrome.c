#include "main.h"

/**
 * 
 * 
 * 
 * 
 * 
 */
int is_palindrome(char *s)
{
    int i, j, sol = 1;

    for (i = 0; *s; i++)
        ;
    
    for (j = 0, i-= 1; j < i; j++, i--)
    {
        if (s[i] != s[j])
        {
            sol = 0;
        }
    }
    return (sol);
}