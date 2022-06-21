/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

typedef struct pos_o {
    int y;
    int x;
} o_pos;

typedef struct mapped {
    int player;
    int numx;
    int numo;
} map_t;

typedef struct array {
    char **array;
    int i;
    int target;
    int index;
    int cpy;
} array_t;

typedef struct s_node {
    o_pos *pos;
    struct s_node *next;
} t_node;

typedef struct player {
    int pos_y;
    int pos_x;
    t_node *object_o;
} player_t;

int check_map(const char *map);
void help(void);
player_t locate_player(char **map);
char **reset(char **array_map, player_t *player);
int movement_is_possible(char **map, int pressed, player_t player);
char *my_line_array_to_str(char **map);
char **my_str_to_line_array(char const *str);
int my_strcmp(char const *s1, char const *s2);
void move_x(char **map, int pressed, player_t **player);
void rewrite_o(char **map, player_t *player);
int win_cond(char **array_map, t_node *positions);
int loose_cond(char **array_map);
int move_key_to_x(char **map, int pressed, player_t *player);
void move_key(char **map, int pressed, player_t *player);
void node_push_back(t_node **node, o_pos *pos);
void my_sokoban(char *map, char **a_map, char *og_map);
void exit_matrix(int returned);
void init(void);

#endif
