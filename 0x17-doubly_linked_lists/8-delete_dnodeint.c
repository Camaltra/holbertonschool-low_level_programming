#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *browse = *head;

    while (browse != NULL && i < index)
    {
        browse = browse->next;
        i++;
    }
    if (browse == NULL)
        return (0);
    if (i == 0 && browse->next == NULL)
        *head = NULL;
    else if (i == 0 && browse->next != NULL)
    {
        browse->next->prev = NULL;
        (*head) = browse->next;
    }
    else if (i != 0 && browse->next == NULL)
    {
        browse->prev->next = NULL;
    }
    else
    {
        browse->next->prev = browse->prev;
        browse->prev->next = browse->next;
    }
    free(browse);
    return (1);
}