/*
** EPITECH PROJECT, 2023
** utils
** File description:
** write_error.c
*/

#include "../include/generator.h"

int write_error(char const *string)
{
    if (string == 0) {
        write_error("(null)");
        return (0);
    } else {
        write(2, string, strlen(string));
        return (strlen(string));
    }
}
