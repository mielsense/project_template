/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-romain.joanenc
** File description:
** my_nonprintable_char
*/

void mputchar(char c);
int mput_nbr(int nbr);

void convert_char(char c)
{
    mputchar('\\');
    if (c < 10) {
        mputchar('0');
        mputchar('0');
    } else if (c >= 10)
        mputchar('0');
    mput_nbr(c);
}

void mnonprintable_char(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127)
            convert_char(str[i]);
        else
            mputchar(str[i]);
        i++;
    }
}
