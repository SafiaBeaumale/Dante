/*
** EPITECH PROJECT, 2023
** generator
** File description:
** error_2.c
*/

#include "../include/generator.h"

int error_argument(int argc, char **argv, int i)
{
    for (int j = 0; argv[i][j] != '\0'; j++) {
        if (argv[i][j] < '0' || argv[i][j] > '9') {
            error_1("Mauvaise dimensions !\n");
            return (1);
        }
    }
}

int error_2(int argc, char **argv)
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    for (int i = 1; i != argc; i++) {
        error_argument(argc, argv, i);
    }
    if (y == 0 || x == 0) {
        error_1("Les dimensons du labyrinthe ne doivent");
        error_1(" pas être égales à 0 !\n");
        return (1);
    }
    return (0);
}
