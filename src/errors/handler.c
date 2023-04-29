/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../includes/lib.h"
#include "../../includes/project_name.h"

int error_handler(int state)
{
    switch (state) {
        case 1: return start_errors();
        default: return 0;
    }
}
