/*
** EPITECH PROJECT, 2018
** init.c
** File description:
** init.c
*/

#include "hunter.h"
#include <stdlib.h>

all_t init_rect(struct s_all *all)
{
    all->rect.left = 0;
    all->rect.top = 0;
    all->rect.width = 110;
    all->rect.height = 110;
    return (*all);
}

all_t init_var(struct s_all *all)
{
    all->move->move.x = 1.4;
    all->move->move.y = 0;
    all->move->mouse.x = 0;
    all->move->mouse.y = 0;
    all->move->duck.x = 0;
    all->move->duck.y = 0;
    all->move->respawn.x = 0;
    all->move->respawn.y = 0;
    all->move->seconds = 0;
    all->move->i = 0;
    all->move->count_respawn = 0;
    all->move->count_shoot = 0;
    all->score->pos.x = 1100;
    all->score->pos.y = 700;
    return (*all);
}
