/*
** EPITECH PROJECT, 2023
** generator
** File description:
** open_maze.c
*/

#include "../include/generator.h"

void open_maze(dante_t *maze)
{
    for (int i = 0; i < maze->y - 1; i += 2) {
        for (int j = 0; j != maze->x; j++) {
            maze->map[i][j] = '*';
        }
    }
    if (maze->perf == 1) {
        for (int i = 1; i < maze->y - 1; i += 2) {
            maze->map[i][rand() % maze->x] = '*';
        }
    } else {
        for (int i = 1; i < maze->y - 1; i += 2) {
            maze->map[i][rand() % maze->x] = '*';
            maze->map[i][rand() % maze->x] = '*';
        }
    }
    if (maze->y % 2 == 0) {
        maze->map[maze->y - 1][maze->x - 1] = '*';
    }
}
