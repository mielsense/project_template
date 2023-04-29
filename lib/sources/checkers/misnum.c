/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

int is_num(const char c)
{
    return (c >= '0' && c <= '9');
}

int mstr_isnum(const char *str)
{
    int i = 0;

    while (str[i]) {
        if (!is_num(str[i]))
            return 0;
        i++;
    }

    return 1;
}
