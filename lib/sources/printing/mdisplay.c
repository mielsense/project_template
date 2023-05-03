/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

int mgetlen(char **arr)
{
    int res = 0;

    while (*arr) {
        res++;
        arr++;
    }

    return res;
}

void mdarray(char **array)
{
    int i = 0;
    int len = mgetlen(array);

    while (i < len) {
        mprintf("%s\n", array[i]);
        i++;
    }
}
