/*
** EPITECH PROJECT, 2018
** window.c
** File description:
** window.c
*/

#include "hunter.h"

all_t window_open(struct s_all *all)
{
    all->move->i = 0;
    set_cursor(all);
    while (all->move->i < 0.3) {
        set_and_draw(all);
        while (sfRenderWindow_pollEvent(all->window, &all->move->event))
            event_mouse(all);
        all->move->i++;
        *all = respawn_data(all);
    }
    return (*all);
}
