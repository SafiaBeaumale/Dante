/*
** EPITECH PROJECT, 2023
** compare_str.c
** File description:
** some functions to compare str for n size or not
*/

#include "../include/solver.h"

int is_samestrn(char *str1, char *str2, int n)
{
    int i = 0;

    while (i < n && str1[i] && str2[i]) {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    return 1;
}

int is_samestr(char *str1, char *str2)
{
    int i = 0;

    if (my_strlen(str1) != my_strlen(str2))
        return 0;
    while (i < my_strlen(str1)) {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    return 1;
}
