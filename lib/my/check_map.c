/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** check_map
*/

#include "../../include/my.h"

int check_map_2(const char *map, map_t *test_map, int i)
{
    if (map[i] == ' ' || map[i] == '\n' || map[i] == '#') {
        return 1;
    }
    if (map[i] == 'P') {
        test_map->player++;
        return 1;
    }
    if (map[i] == 'X') {
        test_map->numx++;
        return 1;
    }
    if (map[i] == 'O') {
        test_map->numo++;
        return 1;
    }
    return 0;
}

int check_map(const char *map)
{
    map_t test_map;

    test_map.numx = 0;
    test_map.numo = 0;
    test_map.player = 0;
    for (int i = 1; map[i] != '\0'; i++) {
        if (check_map_2(map, &test_map, i) == 0)
            return 0;
    }
    if (test_map.numo != test_map.numx || test_map.player != 1)
        return 0;
    return 1;
}
