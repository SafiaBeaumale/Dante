/*
** EPITECH PROJECT, 2023
** utils
** File description:
** my_compare.c
*/

#include "../include/generator.h"

void my_compare_bis(char const *str1, char const *str2, int *data, int i)
{
    if (str1[i] > str2[i] && str1[i] == (str2[i] + 32))
        *data = 0;
    else if (str2[i] > str1[i] && str2[i] == (str1[i] + 32))
        *data = 0;
    else
        *data = -1;
}

int my_compare(char const *str1, char const *str2)
{
    int data = 0;
    int i = 0;

    while (str1[i] != '\0' && data == 0 && str1[i] != 10) {
        if (str1[i] != str2[i]) {
            my_compare_bis(str1, str2, &data, i);
        } else
            data = 0;
        i++;
    }
    if (str1[i] != str2[i])
        data = -1;
    return (data);
}
