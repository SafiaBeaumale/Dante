/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** a function that counts and returns the nb of string's length
*/

#include "../include/solver.h"

int my_strlen(char const *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        counter = counter + 1;
    }
    return counter;
}
