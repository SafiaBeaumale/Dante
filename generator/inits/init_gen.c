/*
** EPITECH PROJECT, 2023
** inits
** File description:
** init_gen.c
*/

#include "../include/generator.h"

void imperfect_gen(dante_t *maze)
{
    perfect(maze);
    for (int i = 0; i != maze->y - 1; i++) {
        printf("%s\n", maze->map[i]);
    }
    printf("%s", maze->map[maze->y - 1]);
}

void perfect_gen(dante_t *maze)
{
    perfect(maze);
    for (int i = 0; i != maze->y - 1; i++) {
        printf("%s\n", maze->map[i]);
    }
    printf("%s\n", maze->map[maze->y - 1]);
}

void init_generation(dante_t *maze)
{
    if (maze->perf)
        perfect_gen(maze);
    else
        imperfect_gen(maze);
}
