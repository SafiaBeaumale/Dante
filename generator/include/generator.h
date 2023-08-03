/*
** EPITECH PROJECT, 2023
** include
** File description:
** generator.h
*/

#ifndef GENERATOR_H_
    #define GENERATOR_H_

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <time.h>
    #include <string.h>

// ==== STRUCTURE ==== //
typedef struct dante_s {
    char **map;
    int x;
    int y;
    int perf;
} dante_t;

// ==== MAIN ==== //
int main(int argc, char **argv);

// === UTILS === //
int is_digits(char *str);
int write_error(char const *string);
int my_get_nbr(char *str);
int my_compare(char const *str1, char const *str2);
void my_compare_bis(char const *str1, char const *str2, int *data, int i);

// ==== ERRORS ==== //
int handle_error(int argc, char **argv, dante_t *maze);
int handle_error_bis(int argc, char **argv, dante_t *maze);
int error_main(int argc, char **argv);
void error_1(char *str_error);
int error_2(int argc, char **argv);
int error_argument(int argc, char **argv, int i);
int error_3(int argc, char **argv);
int error_argument_2(int argc, char **argv, int i);

// ==== INIT ==== //
void init_struct(int argc, char **argv, dante_t *maze);
void init_generation(dante_t *maze);

// ==== GENERATION ==== //
void perfect_gen(dante_t *maze);
void perfect(dante_t *maze);
void imperfect_gen(dante_t *maze);
void open_maze(dante_t *maze);

#endif
