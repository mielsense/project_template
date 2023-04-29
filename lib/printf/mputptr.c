/*
** EPITECH PROJECT, 2022
** my_putptr
** File description:
** my_putptr
*/

void mlow_hexa(int n);
int mputstr(char const *str);

void mputptr(int n)
{
    mputstr("0x");
    mlow_hexa(n);
}
