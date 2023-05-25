/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#ifndef GETTERS_H
    #define GETTERS_H

    #include <unistd.h>

    // getters prototypes

    int matoi(char const *str);
    size_t mstrlen(char const *str);
    int mgetline(const int fd, char **line);
    int mgetsize(char *filepath);
    size_t mgetlen(char **arr);
    char *mcopyuntil(char *src, char stop_char);

#endif //GETTERS_H
