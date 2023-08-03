/*
** EPITECH PROJECT, 2023
** utils
** File description:
** my_get_nbr
*/

#include "../include/generator.h"

int my_get_nbr(char *str)
{
    int nb = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i++;
        } else
            return (nb * sign);
    }
    return (nb * sign);
}
