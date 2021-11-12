#include "lists.h"

/**
* free_list - Free the linked list.
*
* @head: The given linked list.
*
* Return: Anything, cause void function.
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
