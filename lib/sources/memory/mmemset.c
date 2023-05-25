/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include <string.h>

void *mmemset(void *ptr, int value, size_t num)
{
    unsigned char *p;

    p = ptr;
    for (size_t i = 0; i < num; i++)
        *p++ = (unsigned char)value;

    return ptr;
}
