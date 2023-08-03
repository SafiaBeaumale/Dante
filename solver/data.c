/*
** EPITECH PROJECT, 2023
** data.c
** File description:
** some functions to define data
*/

#include "include/solver.h"

int *set_ymax(void)
{
    static int y = 0;
    return &y;
}

int *set_xmax(void)
{
    static int x = 0;
    return &x;
}

int get_ymax(char **maze)
{
    int i = 0;
    while (maze[i] != NULL) {
        i++;
    }
    return i;
}

int get_xmax(char **maze)
{
    int i = 0;
    int j = 0;
    while (maze[i][j] != '\0') {
        j++;
    }
    return j;
}
