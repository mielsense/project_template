/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

int mgetsize(char *filepath)
{
    t_file *file;
    char *buff;
    int line_nb;

    file = mfopen(filepath, "r");
    if (file == NULL) {
        merror("Unable to open file\n");
        return -1;
    }

    while (mgetline(file->fd, &buff) > 0) {
        line_nb++;
        free(buff);
    }

    mfclose(file);
    return line_nb;
}
