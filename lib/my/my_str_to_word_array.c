/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include <stdlib.h>

char *my_strncpy(char *dest, char const *src, int n);

int count_words(const char *str, char seperator)
{
    int is_seperator = 0;
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_seperator == 0 && str[i] != seperator)
            count++;
        is_seperator = (str[i] == seperator) ? (0) : (1);
    }
    return count;
}

char **my_str_to_word_array(char *str, char seperator)
{
    int nb_words = count_words(str, seperator);
    int nb_chars = 0;

    char **array = malloc(sizeof(char *) * (nb_words + 1));

    for (int i = 0; i < nb_words; i++) {
        while (str[nb_chars] != seperator && str[nb_chars] != '\0')
            nb_chars++;

        array[i] = malloc(sizeof(char) * (nb_chars + 1));
        my_strncpy(array[i], str, nb_chars);
        str += nb_chars;

        while (str[0] == seperator)
            str++;
        nb_chars = 0;
    }
    array[nb_words] = NULL;
    return (array);
}
