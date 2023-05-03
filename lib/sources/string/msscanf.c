/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

int parse_int(const char *str, int *str_index)
{
    int value = 0;
    int negative = 0;

    if (str[*str_index] == '-') {
        negative = 1;
        (*str_index)++;
    }

    while (is_num(str[*str_index])) {
        value = value * 10 + (str[*str_index] - '0');
        (*str_index)++;
    }

    if (negative)
        value = -value;

    return value;
}

void parse_char(const char *str, int *str_index, char *char_ptr)
{
    *char_ptr = str[(*str_index)++];
}

void parse_string(const char *str, int *index, char *str_ptr, char delimiter)
{
    while (str[*index] != '\0' && str[*index] != delimiter) {
        *str_ptr++ = str[(*index)++];
    }
    *str_ptr = '\0';
}

int check_quotes(va_list args, const char *format, const char *str, int index)
{
    if (*format++ == '^' && *format++ == '\"') {
        parse_string(str, &index, va_arg(args, char *), '\"');
        return 1;
    }

    return 0;
}

int msscanf(const char *str, const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int assigned_values = 0, str_index = 0;
    char c;

    while ((c = *format++))
        if (c == '%') {
            switch (*format++) {
                case 'd': assigned_values++,
                *(va_arg(args, int *)) = parse_int(str, &str_index); break;
                case 'c': assigned_values++,
                parse_char(str, &str_index, va_arg(args, char *)); break;
                case 's': assigned_values++,
                parse_string(str, &str_index, va_arg(args, char *), ' '); break;
                case '[': (check_quotes(args, format, str, str_index))
                ? assigned_values++ : 0; break;
            }
        } else if (c != str[str_index++]) break;
    va_end(args);
    return assigned_values;
}
