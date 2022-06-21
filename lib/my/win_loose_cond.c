/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** win_loose_cond
*/

#include "../../include/my.h"
#include <stdlib.h>

int win_cond(char **array_map, t_node *positions)
{
    while (positions) {
        if (array_map[positions->pos->y][positions->pos->x] != 'X')
            return 0;
        positions = positions->next;
    }
    return 1;
}

int loose_cond_3(char **array_map, int i, int j)
{
    int haut = 0;
    int cote = 0;

    if (array_map[i][j] == 'X') {
        if (array_map[i + 1][j] == '#' || array_map[i + 1][j] == 'X')
            haut++;
        if (array_map[i - 1][j] == '#' || array_map[i - 1][j] == 'X')
            haut++;
        if (array_map[i][j + 1] == '#' || array_map[i][j + 1] == 'X')
            cote++;
        if (array_map[i][j - 1] == '#' || array_map[i][j - 1] == 'X')
            cote++;
        if (haut && cote)
            return 0;
        else
            return 1;
    } else {
        return 0;
    }
}

int loose_cond_2(char **array_map, int i)
{
    for (int j = 1; array_map[i][j + 1] != '\0'; j++) {
        if (loose_cond_3(array_map, i, j))
            return 0;
        continue;
    }
    return 1;
}

int loose_cond(char **array_map)
{
    for (int i = 1; array_map[i + 1] != NULL; i++) {
        if (loose_cond_2(array_map, i) == 0)
            return 0;
    }
    return 1;
}
