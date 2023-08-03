/*
** EPITECH PROJECT, 2023
** set_char_to_array.c
** File description:
** some functions to set a char array from a str
*/

#include "../include/solver.h"

int count_rows(int len, const char *str, char sep)
{
    int rows = 1;
    for (int i = 0; i < len; i++) {
        if (str[i] == sep)
            rows++;
    }
    return rows;
}

char **create_char_array(const char *str, char sep)
{
    int j = 0, k = 0;
    int len = my_strlen(str);
    int rows = count_rows(len, str, sep);
    int row_len = 0;
    char **arr = malloc((rows + 1) * sizeof(char *));
    if (arr == NULL)
        return NULL;

    for (int i = 0; i < rows - 1; i++) {
        for (k = j; str[k] != sep && str[k]; k++);
        row_len = k - j;
        arr[i] = malloc((row_len + 1) * sizeof(char));
        for (int l = 0; l < row_len; l++) {
            arr[i][l] = str[j + l];
        }
        arr[i][row_len] = '\0';
        j = k + 1;
    }
    arr[rows] = NULL;
    return arr;
}
