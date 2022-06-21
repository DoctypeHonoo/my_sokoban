/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** reset
*/

#include "../../include/my.h"
#include <stdlib.h>

void reset_2(char **array_map, player_t *player, int i)
{
    for (int j = 1; array_map[i][j] != '\0'; j++) {
        if (array_map[i][j] == 'P') {
            player->pos_y = i;
            player->pos_x = j;
        }
    }
}

char **reset(char **array_map, player_t *player)
{
    for (int i = 1; array_map[i] != NULL; i++) {
        reset_2(array_map, player, i);
    }
    return array_map;
}
