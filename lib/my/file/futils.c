/*
** EPITECH PROJECT, 2023
** fline
** File description:
** vim users are the way
*/

#include <unistd.h>
#include <fcntl.h>

int my_fopen(const char *filepath, const char accesmode)
{
    int descriptor = -1;

    switch (accesmode) {
        case 'r':
            descriptor = open(filepath, O_RDONLY);
            break;
        case 'w':
            descriptor = open(filepath, O_WRONLY);
            break;
        default:
            descriptor = open(filepath, O_RDWR);
            break;
    }

    return descriptor;
}

int my_fclose(int file)
{
    return close(file);
}
