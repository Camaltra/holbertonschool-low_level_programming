#include "search_algos.h"

/**
* linear_skip - Search jump algo adapted on linked list
*
* @list: Pointer to the first elem on the list
* @value: Value to find in the list
*
* Return: Pointer to the node taht contain the value, NULL if any issues
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start, *end;

	if (!list)
		return (NULL);

	start = list;
	end = list->express;
	printf("Value checked at index [%ld] = [%d]\n", end->index, end->n);
	while (end->next && end->n < value)
	{
		start = end;
		if (end->express)
			end = end->express;
		else
		{
			while (end->next)
				end = end->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", end->index, end->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
					start->index, end->index);
	while (start && start->index <= end->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	return (NULL);
}
