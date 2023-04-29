/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** prints char characters one by one
*/

#include <unistd.h>

void mputchar(char c)
{
    write(1, &c, 1);
}
