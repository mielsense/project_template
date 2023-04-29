/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

int skip_string(char **format, char **str)
{
    while (**format != '%') {
        if (**format != **str)
            return 0;
        (*format)++;
        (*str)++;
    }

    return 1;
}

int convert_i(char **format, char **str, int *i)
{
    if (!(is_num(**str)))
        return 0;

    *i = my_getnbr(*str);
    while (is_num(**str) || **str == '-')
        (void)(*str)++;

    (*format) += 2;
    return 1;
}

int convert_s(char **format, char **str, char *ptr)
{
    if (!(is_ascii(**str) || **str == ' '))
        return 0;

    char *tmp = malloc(sizeof(char) * (my_strlen(*str) + 10));
    my_strcpy(tmp, *str);
    int len = my_strlen(tmp);
    for (int i = 0; i < len; i++)
        if (tmp[i] == ' ') {
            tmp[i] = '\0';
            break;
        }
    my_strcpy(ptr, tmp);
    free(tmp);

    while ((is_alpha(**str) || **str == '_' || **str == '.' ||
            is_num(**str) || **str == '-'))
        (void)(*str)++;

    (*format) += 2;
    return 1;
}

int sparse(char *str, char *format, ...)
{
    va_list vargs;
    va_start(vargs, format);
    while (1) {
        if (!*str) break;
        switch (*format) {
            case '%': switch (format[1]) {
                case 'i':
                case 'd': if (!convert_i(&format, &str, va_arg(vargs, int *)))
                        return -1;
                    break;
                case 's': if (!convert_s(&format, &str, va_arg(vargs, char *)))
                        return -1;
                    break;
            } break;
            default: if (!skip_string(&format, &str)) return -1;
        }
    }
    if (!*format)
        return 0;
    return -1;
}
