/*
** EPITECH PROJECT, 2022
** my_octal
** File description:
** my_octal
*/

void mputchar(char c);

void moctal(int n)
{
    int res;

    if (n == 0)
        mputchar(48);
    if (n >= 8) {
        res = n % 8;
        n = n / 8;
        moctal(n);
    } else if (n > 0) {
        res = n % 8;
        n = n / 8;
    }
    mputchar(res + 48);
}
