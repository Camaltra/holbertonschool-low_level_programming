#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
    size_t size = 0;

    while (h != NULL)
    {
        size++;
        h = h->next;
    }
    
    return size;
}