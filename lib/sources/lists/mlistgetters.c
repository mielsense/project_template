/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

int mgetlistlen(t_list *head)
{
    int len = 0;

    while (head != NULL) {
        head = head->next;
        len++;
    }

    return (len);
}

t_list *mgetnode(t_list *head, int c)
{
    t_list *node;
    int count;

    node = head;
    count = 0;

    while (node != NULL && count < c) {
        node = node->next;
        count++;
    }

    return node;
}

char *mgetlist(t_list *li, char *tofind)
{
    t_list *tmp = li;
    char *res;
    int len;
    int i = -1;

    len = mstrlen(tofind);
    while (tmp && mstrncmp(tmp->str, tofind, len))
        tmp = tmp->next;

    if (tmp == NULL)
        return NULL;

    tmp ? res = tmp->str : NULL;

    while (++i < len)
        res ? res++ : NULL;

    return res;
}
