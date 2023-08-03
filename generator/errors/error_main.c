/*
** EPITECH PROJECT, 2023
** errors
** File description:
** error_main.c
*/

#include "../include/generator.h"

int error_main(int argc, char **argv)
{
    if (argc == 3) {
        return (error_2(argc, argv));
    } else {
        return (error_3(argc, argv));
    }
}
