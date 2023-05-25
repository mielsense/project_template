/*
** EPITECH PROJECT, 2023
** mprintf
** File description:
** vim is the way
*/

#include "../../../includes/lib.h"

static void parse_format(const char **format, va_list *args)
{
    char specifier = *(++(*format));
    switch (specifier) {
        case 'c':
            mputchar((char)va_arg(*args, int));
            break;

        case 's':
            mputstr(va_arg(*args, const char*));
            break;
        case 'i':
        case 'd':
            mput_nbr(va_arg(*args, int32_t));
            break;

        default:
            mputchar('%');
            mputchar(specifier);
            break;
    }
}

void mprintf(const char *format, ...)
{
    va_list args;

    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%')
            parse_format(&format, &args);
        else
            mputchar(*format);
        format++;
    }

    va_end(args);
}
