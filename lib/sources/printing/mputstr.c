/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** task 02, pool day 4
*/

void mputchar(char c);

int mputstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        mputchar(str[i]);
        i++;
    }
    return 0;
}
