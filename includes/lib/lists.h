/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#ifndef LISTS_H
    #define LISTS_H

    #include "structs.h"

    // lists functions prototypes

        //conversions
        char **mlistconvert(t_list *head);

        // utils
        void maddnode(t_list **head, char *str);
        void mremovenode(t_list **head, int c);
        void mpopnode(t_list **head);

        // getters
        char *mgetlist(t_list *li, char *tofind);
        int mgetlistlen(t_list *head);
        t_list *mgetnode(t_list *head, int c);

#endif //LISTS_H
