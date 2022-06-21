/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** rewrite_o
*/

#include "../../include/my.h"

void rewrite_o(char **map, player_t *player)
{
    t_node *cpy = player->object_o;

    while (cpy) {
        if (map[cpy->pos->y][cpy->pos->x] == ' ')
            map[cpy->pos->y][cpy->pos->x] = 'O';
        cpy = cpy->next;
    }
}
