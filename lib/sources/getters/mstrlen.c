/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** task03, pool day 4
*/

#include <unistd.h>

size_t mstrlen(char const *str)
{
    size_t len = 0;

    while (str[len] != '\0')
        len++;

    return (len);
}
