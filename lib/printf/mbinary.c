/*
** EPITECH PROJECT, 2022
** my_binary
** File description:
** my_binary
*/

void mputchar(char c);

void mbinary(int n)
{
    int res;

    if (n >= 2) {
        res = n % 2;
        n = n / 2;
        mbinary(n);
    } else if (n > 0) {
        res = n % 2;
        n = n / 2;
    }
    mputchar(res + 48);
}
