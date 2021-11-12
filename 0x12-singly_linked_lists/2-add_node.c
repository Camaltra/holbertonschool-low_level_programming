#include "lists.h"

int _strlen(const char *s);

/**
* add_node - Adding a new node at the beginning of a
* given linked list.
*
* @head: Pointer to the linked list.
* @str: Str to put into the next linked list.
*
* Return: The new linked list.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - Calculate the length of a const string.
 *
 * @s: String to manipulate.
 *
 * Return: The length of the inputed string.
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
