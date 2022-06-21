/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
** File description:
** node_push_back
*/

#include "../../include/my.h"
#include <stdlib.h>

void node_push_back(t_node **node, o_pos *pos)
{
    t_node *next_node = malloc(sizeof(t_node));
    t_node *prev_node = malloc(sizeof(t_node));

    next_node->pos = pos;
    next_node->next = NULL;
    if (*node == NULL) {
        *node = next_node;
        return;
    }
    prev_node = *node;
    while (prev_node->next != NULL)
        prev_node = prev_node->next;
    prev_node->next = next_node;
}
