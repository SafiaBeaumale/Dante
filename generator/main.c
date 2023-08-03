/*
** EPITECH PROJECT, 2023
** generator
** File description:
** main.c
*/

#include "include/generator.h"

int main(int argc, char **argv)
{
    dante_t *maze = malloc(sizeof(dante_t));

    if (handle_error(argc, argv, maze) == 84)
        return (84);
    init_struct(argc, argv, maze);
    srand(time(NULL));
    init_generation(maze);
    free(maze);
    return (0);
}
