/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** movement_checker
*/

#include "../../include/my.h"

int movement_is_possible_2(char **map, int pressed, player_t player)
{
    if (pressed == 3) {
        if (map[player.pos_y][player.pos_x + 1] == '#')
            return 0;
        if (map[player.pos_y][player.pos_x + 1] == 'X')
            return 2;
    }
    if (pressed == 4) {
        if (map[player.pos_y][player.pos_x - 1] == '#')
            return 0;
        if (map[player.pos_y][player.pos_x - 1] == 'X')
            return 2;
    }
    return 1;
}

int movement_is_possible(char **map, int pressed, player_t player)
{
    if (pressed == 1) {
        if (map[player.pos_y + 1][player.pos_x] == '#')
            return 0;
        if (map[player.pos_y + 1][player.pos_x] == 'X')
            return 2;
    }
    if (pressed == 2) {
        if (map[player.pos_y - 1][player.pos_x] == '#')
            return 0;
        if (map[player.pos_y - 1][player.pos_x] == 'X')
            return 2;
    }
    return movement_is_possible_2(map, pressed, player);
}
