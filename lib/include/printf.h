/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** bsprintf.h for my_printf
*/

#ifndef PRINTF_H_
    #define PRINTF_H_

    #include <stdarg.h>
    #include <unistd.h>
    #include <stdlib.h>

    int mput_nbr(int nb);
    void mputchar(char c);
    int mputstr(char const *str);
    int mstrlen(char const *str);
    int mputdouble(int n);
    long mputlong(long n);
    void mbinary(int n);
    void moctal(int n);
    void mhigh_hexa(int n);
    void mlow_hexa(int n);
    void mputptr(int n);
    int merror(char const *str);
    void error_print(char c);
    void mnonprintable_char(char const *str);
    void convert_char(char c);
    void hashtag_format(const char *format, va_list args, int i);
    void void_format(const char *format, va_list args, int i);

#endif /* !PRINTF_H_ */
