/*
** EPITECH PROJECT, 2022
** my_putdouble
** File description:
** my_putdouble
*/

void mputchar(char c);

int mputdouble(int n)
{
    if (n < 0) {
        mputchar('-');
        n = -n;
    }
    if (n >= 10) {
        double val = (n % 10);
        mputdouble((n - val) / 10);
        mputchar(48 + val);
    } else
        mputchar((n % 10) + '0');
    return 0;
}
