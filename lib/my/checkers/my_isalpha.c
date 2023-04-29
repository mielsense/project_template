/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

int is_alpha(const char c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int my_str_isalpha(const char *str)
{
    int i = 0;

    while (str[i]) {
        if (!is_alpha(str[i]))
            return 0;
        i++;
    }

    return 1;
}
