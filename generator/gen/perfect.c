/*
** EPITECH PROJECT, 2023
** generator
** File description:
** perfect.c
*/

#include "../include/generator.h"

void perfect(dante_t *maze)
{
    if (maze->y % 2 == 1) {
        for (int j = 0; j != maze->x; j++) {
            maze->map[maze->y - 1][j] = '*';
        }
    }
    open_maze(maze);
}
