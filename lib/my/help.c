/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** help
*/

#include <unistd.h>

void help(void)
{
    write(1, "USAGE\n", 6);
    write(1, "     ./my_sokoban map\n", 22);
    write(1, "DESCRIPTION\n", 12);
    write(1, "     map file representing the warehouse map,", 46);
    write(1, " containing '#' for walls,\n", 27);
    write(1, "          'P' for the player, 'X' for boxes", 44);
    write(1, " and 'O' for storage locations.\n", 32);
}
