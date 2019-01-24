/*
** EPITECH PROJECT, 2018
** malloc.c
** File description:
** malloc.c
*/

#include "hunter.h"

all_t *malloc_struct(struct s_all *all)
{
    all = malloc(sizeof(struct s_all));
    if (all == NULL)
        return (NULL);
    all->move = malloc(sizeof(struct s_move));
    all->text = malloc(sizeof(struct s_text));
    all->score = malloc(sizeof(struct s_score));
    all->menu = malloc(sizeof(struct s_menu));
    all->music = malloc(sizeof(struct s_music));

    return (all);
}
