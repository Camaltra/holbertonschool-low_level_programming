#include "lists.h"

int _strlen(const char *s);

/**
* add_node_end - Adding a node a the end of a given
* linked list.
*
* @head: Pointer to the linked list.
* @str: String to fill into the new node.
*
* Return: The new linked list.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node_search;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node_search = *head;
		while (last_node_search->next != NULL)
			last_node_search = last_node_search->next;
		last_node_search->next = new_node;
	}
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
