/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** my_sokoban
*/

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "./include/my.h"

void exit_matrix(int returned)
{
    endwin();
    exit(returned);
}

int matrix_getchr(void)
{
    int key = getch();

    if (key == KEY_DOWN)
        return 1;
    if (key == KEY_UP)
        return 2;
    if (key == KEY_RIGHT)
        return 3;
    if (key == KEY_LEFT)
        return 4;
    if (key == ' ')
        return 5;
    if (key == 27)
        exit_matrix(0);
    return 0;
}

void init(void)
{
    initscr();
    start_color();
    keypad(stdscr, true);
    init_pair(1, COLOR_RED, COLOR_BLACK);
}

void my_sokoban(char *map, char **a_map, char *og_map)
{
    int p;
    player_t player = locate_player(a_map);

    while (42) {
        clear();
        attron(COLOR_PAIR(1));
        printw("%s", map);
        attroff(COLOR_PAIR(1));
        refresh();
        if (win_cond(a_map, player.object_o))
            exit_matrix(0);
        if (loose_cond(a_map))
            exit_matrix(1);
        p = matrix_getchr();
        a_map = p == 5 ? reset(my_str_to_line_array(og_map), &player) : a_map;
        if (p >= 1 && p <= 4)
            move_key(a_map, p, &player);
        rewrite_o(a_map, &player);
        map = my_line_array_to_str(a_map);
    }
}
