#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: number of arguments
 * @av: Arguments
 *
 * Return: NULL if problem, pointer to the concatanates arguments
 */
char *argstostr(int ac, char **av)
{
	/* i, j browse ac and av, k strFinal */
	int i, j, k = 0, lengthTot = 0;
	char *strFinal;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, lengthTot++)
		for (j = 0; *(*(av + i) + j); j++, lengthTot++)
			;

	strFinal = (char *)malloc(sizeof(char) * lengthTot + 1);

	if (strFinal == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; *(*(av + i) + j); j++, k++)
			*(strFinal + k) = *(*(av + i) + j);
		*(strFinal + k) = '\n';
	}
	*(strFinal + k) = '\0';
	return (strFinal);
}
