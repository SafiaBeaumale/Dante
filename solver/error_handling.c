/*
** EPITECH PROJECT, 2023
** error_handling.c
** File description:
** some fonctions to handle error cases
*/

#include "include/solver.h"

void check_maze(char **maze)
{
    int j = 0;
    for (int i = 0; maze[i + 1] != NULL; j++) {
        if ((maze[i][j] != 'X') && (maze[i][j] != '*') && (maze[i][j] != '\0'))
            exit(84);
        if (maze[i][j] == '\0') {
            j = 0;
            i++;
        }
    }
}

void check_args(char *str, int argc)
{
    struct stat data;
    if (argc != 2)
        exit(84);
    if (open(str, O_RDONLY) == -1)
        exit(84);
    if (stat(str, &data) == -1)
        exit(84);
    if (data.st_size <= 0)
        exit(84);
}
