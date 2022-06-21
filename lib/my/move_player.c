/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** move_player
*/

#include "../../include/my.h"

void move_key_2(char **map, int pressed, player_t *player)
{
    if (pressed == 2) {
        map[(*player).pos_y][(*player).pos_x] = ' ';
        map[(*player).pos_y - 1][(*player).pos_x] = 'P';
        (*player).pos_y -= 1;
    }
    if (pressed == 3) {
        map[(*player).pos_y][(*player).pos_x] = ' ';
        map[(*player).pos_y][(*player).pos_x + 1] = 'P';
        (*player).pos_x += 1;
    }
    if (pressed == 4) {
        map[(*player).pos_y][(*player).pos_x] = ' ';
        map[(*player).pos_y][(*player).pos_x - 1] = 'P';
        (*player).pos_x -= 1;
    }
}

void move_key(char **map, int pressed, player_t *player)
{
    if (movement_is_possible(map, pressed, (*player)) == 0)
        return;
    if (movement_is_possible(map, pressed, (*player)) == 2) {
        if (move_key_to_x(map, pressed, player) == 1)
            return move_x(map, pressed, &player);
        else
            return;
    }
    if (pressed == 1) {
        map[(*player).pos_y][(*player).pos_x] = ' ';
        map[(*player).pos_y + 1][(*player).pos_x] = 'P';
        (*player).pos_y += 1;
    }
    move_key_2(map, pressed, player);
}
