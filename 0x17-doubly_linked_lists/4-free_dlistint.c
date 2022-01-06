#include <stdlib.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *cur;

    while (head != NULL)
    {
        cur = head;
        head = head->next;
        free(cur);
    }
}
