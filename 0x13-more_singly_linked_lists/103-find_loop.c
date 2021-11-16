#include "lists.h"

int check_addr3(const listint_t *head, const listint_t *current, size_t count);

/**
* find_listint_loop - Find if the list contain infinite loop
*
* @head: linked list
*
* Return: The numer of elem
*/
listint_t *find_listint_loop(listint_t *head)
{
	size_t elem = 0;
	listint_t *browse;

	browse = head;
	while (browse != NULL && check_addr3(head, browse, elem))
	{
		browse = browse->next;
		elem++;
	}
	if (browse != NULL)
		return (browse);

	return (NULL);
}

/**
* check_addr3 - Check if the addr has been already print
*
* @head: Linked list
* @current: Current elem to check
* @count: Position of the current elem
*
* Return: 0 if not already print, 1 else
*/
int check_addr3(const listint_t *head, const listint_t *current, size_t count)
{
	size_t i;
	const listint_t *browse;

	browse = head;
	for (i = 0; i < count; i++)
	{
		if ((void *)browse == (void *)current)
			return (0);
		browse = browse->next;
	}
	return (1);
}
