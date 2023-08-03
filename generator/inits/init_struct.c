/*
** EPITECH PROJECT, 2023
** inits
** File description:
** init_struct.c
*/

#include "../include/generator.h"

void init_struct(int argc, char **argv, dante_t *maze)
{
    if (argc == 3)
        maze->perf = 0;
    else
        maze->perf = 1;
    maze->x = atoi(argv[1]);
    maze->y = atoi(argv[2]);
    maze->map = malloc(sizeof(char *) * maze->y);
    for (int i = 0; i != maze->y; i++) {
        maze->map[i] = malloc(sizeof(char) * maze->x);
    }
    for (int i = 0; i != maze->y; i++) {
        for (int j = 0; j != maze->x; j++) {
            maze->map[i][j] = 'X';
        maze->map[i][maze->x] = '\0';
        }
    }
}
