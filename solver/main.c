/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main functions for the dante's solver
*/

#include "include/solver.h"

int is_way(char pos)
{
    if (pos == '*')
        return 1;
    return 0;
}

char *access_content(char *path)
{
    int file_des = open(path, O_RDONLY);
    struct stat data;
    stat(path, &data);
    int size = data.st_size;
    char *buffer = malloc(sizeof(char) * (size + 1));
    buffer[size] = '\0';
    read(file_des, buffer, size);
    close(file_des);
    return buffer;
}

int solver(t_maze *m, int x, int y)
{
    if (x < 0 || x >= m->XMAX || y < 0 ||
    y >= m->YMAX || m->maze[y][x] == 'X')
        return 0;

    if (x == m->XMAX - 1 && y == m->YMAX - 1) {
        m->maze[y][x] = 'o';
        return 1;
    }
    if (m->maze[y][x] == 'o')
        return 0;
    m->maze[y][x] = 'o';

    if (solver(m, x + 1, y) ||
        solver(m, x - 1, y) ||
        solver(m, x, y + 1) ||
        solver(m, x, y - 1))
        return 1;

    m->maze[y][x] = '*';
    return 0;
}

int main(int argc, char **argv)
{
    t_maze *m = malloc(sizeof(t_maze));
    struct stat data;
    char *fd = access_content(argv[1]);
    char **maze = create_char_array(fd, '\n');
    m->XMAX = get_xmax(maze);
    m->YMAX = get_ymax(maze);
    m->maze = maze;

    if (solver(m, 0, 0))
        for (int y = 0; maze[y]; y++)
            printf("%s\n", maze[y]);
    free(m);
    free(fd);
    return 0;
}
