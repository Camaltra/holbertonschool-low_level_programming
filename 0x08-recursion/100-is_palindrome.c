#include "main.h"

int _strlen_recursion(char *s);
int palindrome_test(int, int, char *s);
int is_palindrome(char *s);

/**
 * is_palindrome - Test is a word is a palindrome
 *
 * @s: String to test
 *
 * Return: 1 if is it, 0 else.
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;
	return (palindrome_test(0, i, s));
}

/**
 * _strlen_recursion - Determine the length of the string
 *
 * @s: String
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_test - Test is a word is a palindrome
 * recursivly
 *
 * @i: index to browse the world
 * @j: index to browse the word in reverse
 * @s: String to test
 *
 * Return: 1 if it's a palindrome, 0 else
 */
int palindrome_test(int i, int j, char *s)
{
	if (i < j)
		if (*(s + i) != *(s + j))
			return (0);
		else
			return (palindrome_test(i + 1, j - 1, s));
	else
		return (1);
}
