/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** task03, pool day 7
*/

int mstrlen(char const *str);

char *mstrncat(char *dest, char *src, int nb)
{
    int dest_length = mstrlen(dest);
    int i = 0;

    while (src[i] != '\0' && i < nb) {
        dest[dest_length + i] = src[i];
        i++;
    }
    dest[dest_length + i] = '\0';
    return dest;
}
