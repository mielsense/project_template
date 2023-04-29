/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** task03, pool day 6 - reverse a string
*/

int mstrlen(char const *str);

char *mrevstr(char *str)
{
    char temp_str[mstrlen(str) + 1];

    for (int i = 0; i <= mstrlen(str); i++)
        temp_str[i] = str[i];
    for (int i = 0; i < mstrlen(temp_str); i++)
        str[i] = temp_str[mstrlen(temp_str) - 1 - i];
    return str;
}
