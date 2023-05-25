/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#ifndef FILE_H
    #define FILE_H

    #include <unistd.h>
    #include "structs.h"

    // file functions prototypes

        // file init
        t_file *mfopen(const char *filename, const char *mode);
        int mfclose(t_file *file);

        // file handling
        ssize_t mfread(void *ptr, size_t size, size_t count, t_file *file);

        // write in file
    ssize_t mfwrite(const void *ptr, size_t size, size_t count, t_file *file);

#endif //FILE_H
