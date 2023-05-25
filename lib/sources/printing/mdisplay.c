/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

size_t mgetlen(char **arr)
{
    size_t res = 0;

    while (*arr++) {
        res++;
    }

    return res;
}

void mdarray(char **array)
{
    int i = 0;
    int len = 0;

    len = mgetlen(array);
    while (i < len) {
        mprintf("%s\n", array[i]);
        i++;
    }
}
