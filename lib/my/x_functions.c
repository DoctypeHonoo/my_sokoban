/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** x_functions
*/

#include "../../include/my.h"

int move_key_to_x_2(char **map, int pressed, player_t *player)
{
    if (pressed == 3) {
        if (map[(*player).pos_y][(*player).pos_x + 2] == 'X' ||
        map[(*player).pos_y][(*player).pos_x + 2] == '#')
            return 0;
    }
    if (pressed == 4) {
        if (map[(*player).pos_y][(*player).pos_x - 2] == 'X' ||
        map[(*player).pos_y][(*player).pos_x - 2] == '#')
            return 0;
    }
    return 1;
}

int move_key_to_x(char **map, int pressed, player_t *player)
{
    if (pressed == 1) {
        if (map[(*player).pos_y + 2][(*player).pos_x] == 'X' ||
        map[(*player).pos_y + 2][(*player).pos_x] == '#')
            return 0;
    }
    if (pressed == 2) {
        if (map[(*player).pos_y - 2][(*player).pos_x] == 'X' ||
        map[(*player).pos_y - 2][(*player).pos_x] == '#')
            return 0;
    }
    return move_key_to_x_2(map, pressed, player);
}

void move_x_2(char **map, int pressed, player_t **player)
{
    if (pressed == 3) {
        map[(**player).pos_y][(**player).pos_x] = ' ';
        map[(**player).pos_y][(**player).pos_x + 1] = 'P';
        map[(**player).pos_y][(**player).pos_x + 2] = 'X';
        (**player).pos_x += 1;
    }
    if (pressed == 4) {
        map[(**player).pos_y][(**player).pos_x] = ' ';
        map[(**player).pos_y][(**player).pos_x - 1] = 'P';
        map[(**player).pos_y][(**player).pos_x - 2] = 'X';
        (**player).pos_x -= 1;
    }
}

void move_x(char **map, int pressed, player_t **player)
{
    if (pressed == 1) {
        map[(**player).pos_y][(**player).pos_x] = ' ';
        map[(**player).pos_y + 1][(**player).pos_x] = 'P';
        map[(**player).pos_y + 2][(**player).pos_x] = 'X';
        (**player).pos_y += 1;
    }
    if (pressed == 2) {
        map[(**player).pos_y][(**player).pos_x] = ' ';
        map[(**player).pos_y - 1][(**player).pos_x] = 'P';
        map[(**player).pos_y - 2][(**player).pos_x] = 'X';
        (**player).pos_y -= 1;
    }
    move_x_2(map, pressed, player);
}
