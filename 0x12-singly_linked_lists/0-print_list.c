#include "lists.h"

/**
* print_list - Print all elem of the list_t
*
* @h: Pointer to the list_t
*
* Return: The number of nodes.
*/
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	int i = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next, i++;
	}
	return (i);
}
