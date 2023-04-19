/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include <stdlib.h>
#include <string.h>
#include "../../../includes/lib.h"

char *my_strndup(char *src, int len)
{
    char *resp = malloc(sizeof(char) * (my_strlen(src) + 1));
    int count = 0;

    if (resp == NULL)
        return NULL;

    while (src[count] != '\0' && count < len) {
        resp[count] = src[count];
        count = count + 1;
    }
    resp[count] = '\0';

    return resp;
}
