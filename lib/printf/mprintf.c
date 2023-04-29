/*
** EPITECH PROJECT, 2022
** mprintf
** File description:
** Recreating the "printf" function (w/romain)
*/

#include "../include/printf.h"

void hashtag_format(const char *format, va_list args, int i)
{
    int arg = va_arg(args, int);

    switch (format[i + 1]) {
        case 'o':
            if (arg != 0)
                moctal(arg);
            break;
        case 'x':
            if (arg != 0)
                mputstr("0x");
            mlow_hexa(arg);
            break;
        case 'X':
            if (arg != 0)
                mputstr("0X");
            mhigh_hexa(arg);
            break;
    }
}

void void_format(const char *format, va_list args, int i)
{
    switch (format[i + 1]) {
        case 'd':
        case 'i':
            mputchar(' ');
            mput_nbr(va_arg(args, int)); break;
    }
}

void case_handler(const char *flags, va_list args, int i)
{
    switch (flags[i + 1]) {
        case '%': mputchar('%'); break;
        case 's': mputstr(va_arg(args, char *)); break;
        case 'c': mputchar(va_arg(args, int)); break;
        case 'd':
        case 'i': mput_nbr(va_arg(args, int)); break;
        case 'n': mput_nbr(mstrlen(flags)); break;
        case 'u': mput_nbr(va_arg(args, unsigned int)); break;
        case 'o': moctal(va_arg(args, int)); break;
        case 'X': mhigh_hexa(va_arg(args, int)); break;
        case 'x': mlow_hexa(va_arg(args, int)); break;
        case 'f': mputdouble(va_arg(args, double)); break;
        case 'l': mputlong(va_arg(args, long)); break;
        case 'p': mputptr(va_arg(args, int)); break;
        case 'b': mbinary(va_arg(args, unsigned int)); break;
        case 'S': mnonprintable_char(va_arg(args, char *)); break;

        case '#' : hashtag_format(flags, args, i + 1); break;
        case ' ': void_format(flags, args, i + 1); break;
    }
}

int mprintf(const char *str, ...)
{
    va_list args;
    int i = 0;

    va_start(args, str);
    if (str[i] == '\0'){
        merror("String is empty");
        return 84;
    }
    while (str[i] != '\0') {
        if (str[i] == '%') {
            case_handler(str, args, i);
            i += 1 + (str[i + 1] == '#') + (str[i + 1] == ' ');
        } else
            mputchar(str[i]);
        i++;
    }
    va_end(args);
    return 0;
}
