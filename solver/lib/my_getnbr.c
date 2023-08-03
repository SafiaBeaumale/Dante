/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** a function that returns a number, sent to the function as a string
*/

#include "../include/solver.h"

int my_getnbr(char const *str)
{
    int nb_neg = 1;
    int i = 0;
    int nb = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            nb_neg = nb_neg * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0') {
        nb = nb * 10;
        nb = nb + (str[i] - '0');
        i++;
    }
    return (nb * nb_neg);
}
