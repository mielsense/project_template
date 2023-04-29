/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../includes/lib.h"
#include "../../includes/project_name.h"

void free_array(char **array, int size)
{
    for (int i = 0; i < size; i++) {
        if (array[i] != NULL) {
            free(array[i]);
            array[i] = NULL;
        }
    }
    if (array != NULL) {
        free(array);
        array = NULL;
    }
}
