/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

char *mcopyuntil(char *src, char stop_char)
{
    int i = 0;

    while (src[i] != '\0' && src[i] != stop_char)
        i++;

    return mstrndup(src, i);
}
