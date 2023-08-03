/*
** EPITECH PROJECT, 2023
** errors
** File description:
** error_3.c
*/

#include "../include/generator.h"

int error_argument_2(int argc, char **argv, int i)
{
    for (int j = 0; argv[i][j] != '\0'; j++) {
        if (argv[i][j] < '0' || argv[i][j] > '9') {
            error_1("Mauvaise dimensions !\n");
            return (1);
        }
    }
}

int error_3(int argc, char **argv)
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    for (int i = 1; i != argc - 1; i++) {
        error_argument_2(argc, argv, i);
    }
    if (y == 0 || x == 0) {
        error_1("Les dimensons du labyrinthe ne doivent");
        error_1(" pas être égales à 0 !\n");
        return (1);
    }
    if (strcmp(argv[3], "perfect") == 0) {
        error_1("Argument 3 doit être parfait !\n");
        return (1);
    }
    return (0);
}
