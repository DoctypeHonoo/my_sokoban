/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** locate_player
*/

#include "../../include/my.h"
#include <stdlib.h>

void locate_player_2(char **map, player_t *player, int i, o_pos *var_o)
{
    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == 'P') {
            player->pos_x = j;
            player->pos_y = i;
        }
        if (map[i][j] == 'O') {
            var_o = malloc(sizeof(o_pos));
            var_o->y = i;
            var_o->x = j;
            node_push_back(&player->object_o, var_o);
        }
    }
}

player_t locate_player(char **map)
{
    player_t player;
    player.object_o = NULL;
    o_pos *var_o = NULL;

    for (int i = 0; map[i] != NULL; i++) {
        locate_player_2(map, &player, i, var_o);
    }
    return player;
}
