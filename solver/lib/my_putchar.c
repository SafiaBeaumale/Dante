/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** a function that print one char
*/

#include "../include/solver.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
