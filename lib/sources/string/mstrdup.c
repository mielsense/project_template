/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include <unistd.h>
#include <stdlib.h>

char *mstrcpy(char *dest, char const *src);
int mstrlen(char const *str);

char *mstrdup(char const *src)
{
    char *dest = malloc(sizeof(char) * (mstrlen(src) + 1));

    if (dest == NULL)
        return NULL;

    return mstrcpy(dest, src);
}
