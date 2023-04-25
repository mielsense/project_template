/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strtrim
*/

#include <stdlib.h>

size_t my_strlen(char const *str);

char *form_string(char const *s, int i, int len)
{
    char *str;
    str = (char*)malloc(sizeof(char) * (len + 1));

    s += i;
    i = -1;

    while (++i < len)
        str[i] = *s++;
    str[i] = '\0';

    return str;
}

int get_len(char const *s)
{
    int len = my_strlen((char *) s);

    while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
        len--;

    return len;
}

char *mu_strtrim(char const *s)
{
    int i;
    int len;

    if (s == NULL)
        return NULL;

    len = get_len(s);
    i = -1;

    while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
        len--;

    if (len <= 0)
        len = 0;

    return form_string(s, i, len);
}
