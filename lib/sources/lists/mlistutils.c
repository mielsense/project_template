/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

void mpopnode(t_list **head)
{
    t_list *temp;

    if (*head == NULL)
        return;

    temp = *head;
    *head = (*head)->next;

    mfreenode(temp);
}

void mremovenode(t_list **head, int c)
{
    t_list *prev;
    t_list *removed;

    if (c == 0) {
        mpopnode(head);
        return;
    }

    prev = mgetnode(*head, c - 1);

    if (prev == NULL || prev->next == NULL)
        return;

    removed = prev->next;
    prev->next = removed->next;

    mfreenode(removed);
}

void maddnode(t_list **head, char *str)
{
    t_list *node;
    t_list *temp;

    node = malloc(sizeof(t_list));
    node->str = mstrdup(str);
    node->next = NULL;

    if (*head == NULL) {
        *head = node;
        return;
    }

    temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = node;
}
