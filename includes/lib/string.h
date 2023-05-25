/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#ifndef STRING_H
    #define STRING_H

    // string functions prototypes

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

#endif //STRING_H
