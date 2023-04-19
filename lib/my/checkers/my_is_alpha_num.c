/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

int my_is_alpha_num(char c)
{
    if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z')
            && (c < '0' || c > '9'))
            return 0;
    return 1;
}

int my_str_is_alpha_num(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_is_alpha_num(str[i]))
            return 0;
    }
    return 1;
}
