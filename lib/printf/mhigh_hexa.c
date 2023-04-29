/*
** EPITECH PROJECT, 2022
** my_high_hexa
** File description:
** my_high_hexa
*/

void mputchar(char c);
int mputstr(char const *str);

void mhigh_hexa(int n)
{
    int res;

    if (n >= 16) {
        res = n % 16;
        n = n / 16;
        mhigh_hexa(n);
    } else if (n > 0) {
        res = n % 16;
        n = n / 16;
    }

    if (res > 9) {
        mputchar(res + 55);
    } else
        mputchar(res + 48);
}
