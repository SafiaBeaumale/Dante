/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** a function that displays the number given as a parameter
*/

#include "../include/solver.h"

int my_put_nbr(int nb)
{
    if (nb <= 9 && nb >= 0) {
        my_putchar(nb + 48);
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    my_put_nbr(nb / 10);
    my_putchar((nb % 10) + 48);
    return 0;
}
