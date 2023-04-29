/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** task 07, day 03
*/

void mputchar(char c);

int mput_nbr(int nb)
{
    if (nb < 0) {
        mputchar('-');
        nb = -nb;
    }
    if (nb / 10){
        mput_nbr(nb / 10);
    }
    mputchar(nb % 10 + '0');
    return 0;
}
