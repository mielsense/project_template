/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#ifndef LIB_H
    #define LIB_H

    #include <unistd.h>
    #include <stdarg.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <sys/stat.h>

    // getters prototypes

        int matoi(char const *str);
        size_t mstrlen(char const *str);
        int mgetline(const int fd, char **line);

    // checkers prototypes

        int mstr_isascii(const char *str);
        int mstr_isalpha(const char *str);
        int mstr_isnum(const char *str);
        int is_num(const char c);
        int is_alpha(const char c);
        int is_ascii(const char c);
        int mgrep(const char *pattern, const char src);

    // print fucntions prototypes

        // string
            int mputstr(char const *str);
            int merror(char const *str);
        // char
            void mputchar(char c);
        // int
            int mput_nbr(int nb);
        // all
            int mprintf(const char *str, ...);

    // str functions prototypes

        // copy functions prototypes
            char *mstrcpy(char *dest, char const *src);
            char *mstrncpy(char *dest, char const *src, int n);

        // cat functions prototypes
            char *mstrcat(char *dest, char *src);
            char *mstrncat(char *dest, char *src, int nb);

        // dup functions prototypes
            char *mstrdup(char const *src);
            char *mstrndup(char *src, int len);

        // compare functions prototypes
            int mstrcmp(char const *s1, char const *s2);
            int mstrncmp(char *s1, char *s2, int n);

        // random functions prototypes
            char *mrevstr(char *str);
            char **msplit(char *str, char seperator);
            int msscanf(const char *str, const char *format, ...);
            char *mstrtrim(char const *s);

    // file functions prototypes
        int mfopen(const char *filepath, const char accesmode);
        int mfclose(int file);

#endif //LIB_H
