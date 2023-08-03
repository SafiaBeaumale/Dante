/*
** EPITECH PROJECT, 2023
** errors
** File description:
** error_1.c
*/

#include "../include/generator.h"

void error_1(char *str_error)
{
    write(2, str_error, strlen(str_error));
}
