#include "lists.h"

/**
* list_len - Calculate the number of node of a linked list
*
* @h: Linked list
*
* Return: Size of the linked list
*/
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
		tmp = tmp->next, i++;
	return (i);
}
