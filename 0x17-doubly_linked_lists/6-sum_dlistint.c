#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
    dlistint_t *browse = head;
    int sum = 0;

    while (browse)
    {
        sum += browse->n;
        browse = browse->next;
    }

    return sum;
}