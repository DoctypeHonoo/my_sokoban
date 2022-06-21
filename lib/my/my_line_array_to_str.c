/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** my_line_array_to_str
*/

#include <unistd.h>
#include <stdlib.h>

char *my_line_array_to_str_2(char **map, char *str)
{
    int chars = 0;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            str[chars] = map[i][j];
            chars++;
        }
        str[chars] = '\n';
        chars++;
    }
    str[chars] = '\0';
    return str;
}

char *my_line_array_to_str(char **map)
{
    int chars = 0;
    int lines = 0;
    char *str;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            chars++;
        }
        lines++;
    }
    str = malloc(sizeof(char) * (chars + lines + 1));
    return my_line_array_to_str_2(map, str);
}
