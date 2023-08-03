/*
** EPITECH PROJECT, 2023
** solver.h
** File description:
** headers for the solver
*/

#ifndef SOLVER_H_
    #define SOLVER_H_

    #include <sys/stat.h>
    #include <sys/fcntl.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>

    /*#define YMAX (*set_ymax())
    #define XMAX (*set_xmax())*/

typedef struct s_maze {
    char **maze;
    int YMAX;
    int XMAX;
}t_maze;

//LIB
void my_putchar(char c);
int my_putstr(char const *str);
int my_getnbr(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int is_samestr(char *str1, char *str2);
int is_samestrn(char *str1, char *str2, int n);
char *concat_str(const char *init_str, char *str_add);
int count_rows(int len, const char *str, char sep);
char **create_char_array(const char *str, char sep);

//ERROR_HANDLING
void check_args(char *str, int argc);
void check_maze(char **maze);

//SOLVER
char *access_content(char *path);
int *set_ymax(void);
int get_ymax(char **maze);
int *set_xmax(void);
int get_xmax(char **maze);
int is_way(char pos);

#endif
