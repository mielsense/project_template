/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

int is_ascii(const char c)
{
    return (c & ~0x7F) == 0 ? 1 : 0;
}

int mstr_isascii(const char *str)
{
    int i = 0;

    while (str[i]) {
        if (!is_ascii(str[i]))
            return 0;
        i++;
    }

    return 1;
}
