/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

char **mlistconvert(t_list *head)
{
    int i = 0;
    int len = mgetlistlen(head) + 1;
    char **arr = malloc(sizeof(char *) * len);

    if (len == 1)
        return NULL;

    while (head != NULL && i < len - 1) {
        arr[i] = malloc(sizeof(char) * mstrlen(head->str) + 1);
        mmemset(arr[i], 0, mstrlen(head->str) + 1);

        mstrcat(arr[i], head->str);
        head = head->next;
        i++;
    }
    arr[i] = NULL;

    return arr;
}
