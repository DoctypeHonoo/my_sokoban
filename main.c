/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** main
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

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    if (my_strcmp(argv[1], "-h") == 0) {
        help();
        return 0;
    }
    struct stat sb;
    if (stat(argv[1], &sb) == -1)
        return 84;
    char *map = malloc(sizeof(char) * sb.st_size);
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        return 84;
    read(fd, map, sb.st_size);
    if (check_map(map) == 0)
        return 84;
    init();
    my_sokoban(map, my_str_to_line_array(map), map);
    exit_matrix(0);
}
