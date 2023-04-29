/*
** EPITECH PROJECT, 2023
** fline
** File description:
** vim users are the way
*/

int mgrep(const char *pattern, const char src)
{
    int found = 0;
    int i = 0;

    while (pattern[i]) {
        found += pattern[i] == src;
        i++;
    }

    return found;
}
