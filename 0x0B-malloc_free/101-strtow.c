#include "main.h"
#include <stdlib.h>

int _strlen_letter(char *s);
int _strcount_word(char *str);

/**
 * strtow - splits a string into words.
 *
 * @str: String to splits
 *
 * Return: NULL is any problem, pointer to the new string else
 */
char **strtow(char *str)
{
	int i, word, letter, k, j = 0;
	char **help;

	if (str == NULL || *str == '\0')
		return (NULL);

	word = _strcount_word(str);
	if (word == 0)
		return (NULL);

	help = (char **)malloc(sizeof(char *) * (word + 1));
	if (help == NULL)
		return (NULL);

	for (i = 0; i < word; i++)
	{
		while (*(str + j) == ' ')
			j++;

		letter = _strlen_letter(str + j);

		help[i] = (char *)malloc(sizeof(char) * letter + 1);

		if (help[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(help[i]);
			free(help);
			return (NULL);
		}

		for (k = 0; k < letter; k++)
			help[i][k] = str[j++];

		help[i][k] = '\0';
	}
	help[i] = NULL;
	return (help);
}

/**
 * _strlen_letter - Calculate length of a word
 *
 * @s: Word inputed
 *
 * Return: Length of the word
 */
int _strlen_letter(char *s)
{
	int i = 0;

	while (*(s + i) != ' ' && *(s + i))
		i++;
	return (i);
}

/**
 * _strcount_word - Calculate the number of word
 *
 * @str: String inputed
 *
 * Return: The number of word
 */
int _strcount_word(char *str)
{
	int i, word_count = 0;

	for (i = 0; *(str + i) - 1; i++)
	{
		if (*(str + i) != ' ')
		{
			word_count++;
			i += _strlen_letter(str + i);
		}
	}
	return (word_count);
}