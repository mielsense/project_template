/*
** EPITECH PROJECT, 2022
** my_low_hexa
** File description:
** my_low_hexa
*/

void mputchar(char c);
int mputstr(char const *str);

void mlow_hexa(int n)
{
    int res;

    if (n >= 16) {
        res = n % 16;
        n = n / 16;
        mlow_hexa(n);
    } else if (n > 0) {
        res = n % 16;
        n = n / 16;
    }

    if (res > 9) {
        mputchar(res + 87);
    } else
        mputchar(res + 48);
}
