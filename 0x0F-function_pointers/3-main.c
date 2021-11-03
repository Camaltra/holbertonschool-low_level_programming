#include "3-calc.h"

/**
 * main - Make the operation between 2 numbers
 *
 * @argc: Number of arg
 * @argv: Value of arg
 *
 * Return: 0 (succes)
 */
int main(int argc,char *argv[])
{
    int nb1, nb2;
    int (*operation)(int, int);
    
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }
    operation = get_op_func(argv[2]);
    if (operation == NULL)
        {
            printf("Error\n");
            exit(99);
        }
    nb1 = atoi(argv[1]), nb2 = atoi(argv[3]);
    printf("%d\n", operation(nb1, nb2));
    return (0);
}