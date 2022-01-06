#include "lists.h"
#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *browse;
    
    if (head == NULL)
        return (NULL);

    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);
    new->n = n;
    new->prev = NULL;
    new->next = NULL;
    if (*head == NULL)
        *head = new;
    else
    {
        browse = *head;
        while (browse->next != NULL)
            browse = browse->next;
        browse->next = new;
        new->prev = browse;
    }

    return new;
}