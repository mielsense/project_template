/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** task01, pool day 4
*/

int mstrlen(char const *str);

char *mstrcpy(char *dest, char const *src)
{
    int n = mstrlen(src);
    for (int i = 0; i <= n; i++) {
        dest[i] = src[i];
    }
    return dest;
}
