/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#ifndef STRUCTS_H
    #define STRUCTS_H

    #define BUFF_SIZE 1024
     
    // linked list
    typedef struct s_list {
        char *str;
        struct s_list *next;
    } t_list;

    // struct for files
    typedef struct s_file {
        int fd;
    } t_file;
   
    // struct for getline
    typedef struct s_getfile {
        int d;
        int s;
        char *b;
        char *t;
        char r[BUFF_SIZE];
        int i;
        int j;
        int k;
        struct s_getfile *n;
    } t_getfile;

#endif //STRUCTS_H
