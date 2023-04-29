/*
** EPITECH PROJECT, 2022
** my_putlong
** File description:
** my_putlong
*/

void mputchar(char c);

long mputlong(long n)
{
    if (n < 0) {
        mputchar('-');
        n = -n;
    }
    if (n >= 10) {
        long val = (n % 10);
        mputlong((n - val) / 10);
        mputchar(48 + val);
    } else
        mputchar((n % 10) + '0');
    return 0;
}
