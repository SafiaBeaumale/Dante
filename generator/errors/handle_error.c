/*
** EPITECH PROJECT, 2023
** errors
** File description:
** handle_error.c
*/

#include "../include/generator.h"

int handle_error_bis(int argc, char **argv, dante_t *maze)
{
    if (is_digits(argv[1]) != 0 || is_digits(argv[2]) != 0) {
        write_error("Variables X and Y must be numbers !\n");
        return (84);
    } else if ((maze->x = my_get_nbr(argv[1])) < 1 ||
    (maze->y = my_get_nbr(argv[2])) < 1) {
        write_error("X and Y must be greater than 0 !");
        return (84);
        }
}

int handle_error(int argc, char **argv, dante_t *maze)
{
    if (argc < 3) {
        if (argc == 2 && my_compare(argv[1], "-h") == 0)
            printf("Usage: ./generator X Y (+ perfect)\n");
        else
            write_error("Arguments are missing !\n");
        return (84);
    } else {
        handle_error_bis(argc, argv, maze);
    }
    return (0);
}
