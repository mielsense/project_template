/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include <stdlib.h>
#include <string.h>
#include "../../../includes/lib.h"

size_t word_counter(char *str, char delim)
{
    size_t i = 0;
    size_t nb = 0;

    if (str[0] == '\0')
        return 1;

    for (; *str == delim; str++);
    i = mstrlen(str) - 1;

    for (; i > 0 && (str[i] == delim); i--)
        str[i] = '\0';

    for (; *str != '\0'; str++) {
        if (*str == delim)
            nb++;
        for (; *str == delim; str++);
    }

    return nb + 1;
}

char *get_word(char *line, char delim)
{
    size_t i = 0;

    if (*line == '\0')
        return mstrdup(line);

    while (line[i] != delim && line[i] != '\0')
        i++;

    return mstrndup(line, i);
}

char **mysplit(char *line, char delim)
{
    size_t i = 0;
    size_t nb_word = 0;
    char **tab;

    if (!line)
        return NULL;

    nb_word = word_counter(line, delim);
    if (!(tab = malloc(sizeof(char *) * (nb_word + 1))))
        return NULL;

    for (; i < nb_word; i++) {
        for (; *line == delim; line++);
        if (!(tab[i] = get_word(line, delim)))
            return NULL;
        for (; *line != delim && *line; line++);
    }

    tab[i] = NULL;
    return tab;
}
