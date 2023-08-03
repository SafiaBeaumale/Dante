/*
** EPITECH PROJECT, 2023
** concat_str.c
** File description:
** a function to concat two string in one
*/

#include "../include/solver.h"

char *concat_str(const char *init_str, char *str_add)
{
    int i = 0;
    int j = 0;
    char *str;
    str = malloc(sizeof(char) * (my_strlen(init_str)
+ my_strlen(str_add) + 2));

    while (init_str[i]) {
        str[i] = init_str[i];
        i++;
    }
    str[i] = '/';
    i = i + 1;
    while (str_add[j]) {
        str[i++] = str_add[j++];
    }
    str[i] = '\0';
    return str;
}
