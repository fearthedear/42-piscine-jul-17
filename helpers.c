#include "bsq.h"

void	insert(ptr *head, char c)
{
    while (*head)
        head = &(*head)->next;
    *head = malloc(sizeof(**head));
    (*head)->val = c;
    (*head)->next = NULL;
}

void fill_str(ptr head, char *str)
{
    int i;

    i = 0;
    while (head)
    {
        str[i] =  head->val;
        head = head->next;
        i++;
    }
    str[i] = '\0';
}

void freelist(ptr *head)
{
    while (*head)
    {
        ptr tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }
}