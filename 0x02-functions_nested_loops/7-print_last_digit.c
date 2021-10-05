#include "main.h"

/**
 * print_last_digit - Isolate the last digit of a integer, and print it
 * 
 * @N: Integer input 
 * 
 * Return: The last digits
 */
int print_last_digit(int N)
{
    (N < 0) ? N = -N : N; 
    _putchar(N % 10 + '0');
    return(N % 10);
}
