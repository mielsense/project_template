/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

void mfreenode(t_list *node)
{
    if (node != NULL) {
        free(node->str);
        free(node);
    }
}

void mfreelist(t_list *head)
{
    t_list *node = head;
    t_list *next = NULL;

    while (node) {
        next = node->next;
        mfreenode(node);
        node = next;
    }
}

void mfreearray(char **array, int size)
{
    for (int i = 0; i < size; i++) {
        if (array[i] != NULL) {
            free(array[i]);
            array[i] = NULL;
        }
    }
    if (array != NULL) {
        free(array);
        array = NULL;
    }
}
