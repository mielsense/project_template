/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#ifndef MEMORY_H
    #define MEMORY_H

    #include <unistd.h>
    #include "structs.h"
   
    // memory functions prototypes

        // utils
        void *mmemset(void *ptr, int value, size_t num);

        // free
        void mfreearray(char **array, int size);
        void mfreelist(t_list *head);
        void mfreenode(t_list *node);

#endif //MEMORY_H
