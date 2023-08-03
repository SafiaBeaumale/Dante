/*
** EPITECH PROJECT, 2023
** utils
** File description:
** is_digits
*/

#include "../include/generator.h"

int is_digits(char *str)
{
    for (int i = 0; str[i] != '\0'; i = i + 1) {
        if (str[i] < 48 || str[i] > 57)
            return (84);
    }
    return (0);
}
