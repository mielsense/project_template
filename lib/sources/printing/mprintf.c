/*
** EPITECH PROJECT, 2023
** mprintf
** File description:
** vim is the way
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>

typedef struct {
    char *buffer;
    uint32_t length;
} mprintf_t;

static void print_char(mprintf_t *buf, char c)
{
    buf->buffer[buf->length++] = c;
}

static void print_str(mprintf_t *buf, const char *s)
{
    while (*s != '\0') {
        print_char(buf, *s);
        s++;
    }
}

static void print_dec(mprintf_t *buf, int32_t n)
{
    if (n < 0) {
        print_char(buf, '-');
        n = -n;
    }
    uint32_t divisor = 1;
    while (divisor <= (uint32_t)n / 10) {
        divisor *= 10;
    }
    while (divisor > 0) {
        print_char(buf, (n / divisor) % 10 + '0');
        divisor /= 10;
    }
}

static void parse_format(const char **format, va_list *args, mprintf_t *buf)
{
    char specifier = *(++(*format));
    switch (specifier) {
        case 'c':
            print_char(buf, (char)va_arg(*args, int));
            break;

        case 's':
            print_str(buf, va_arg(*args, const char *));
            break;
        case 'i':
        case 'd':
            print_dec(buf, va_arg(*args, int32_t));
            break;

        default:
            print_char(buf, '%');
            print_char(buf, specifier);
            break;
    }
}

void mprintf(const char *format, ...)
{
    va_list args;
    mprintf_t buf;
    buf.buffer = (char*)malloc(64);
    buf.length = 0;

    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            parse_format(&format, &args, &buf);
        } else {
            print_char(&buf, *format);
        }
        format++;
    }
    va_end(args);

    buf.buffer[buf.length] = '\0';
    write(STDOUT_FILENO, buf.buffer, buf.length);
    free(buf.buffer);
}
