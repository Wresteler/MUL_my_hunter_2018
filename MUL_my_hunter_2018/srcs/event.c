/*
** EPITECH PROJECT, 2018
** event.c
** File description:
** event.c
*/

#include "hunter.h"

void event_mouse(struct s_all *all)
{
    if (all->move->event.type == sfEvtClosed)
        sfRenderWindow_close(all->window);
    if (all->move->event.type == sfEvtMouseButtonPressed) {
        if (all->move->mouse.x >= all->move->duck.x
        && all->move->mouse.y >= all->move->duck.y
        && all->move->mouse.x <= (all->move->duck.x + 110)
        && all->move->mouse.y <= (all->move->duck.y + 110)) {
            event_shoot(all);
        }
    }
}

void event_shoot(struct s_all *all)
{
    all->move->respawn.y = rand() %450;
    sfSprite_setPosition(all->text->sduck, all->move->respawn);
    all->move->move.x += 0.06;
    all->move->move.y += 0.06;
    all->move->count_shoot++;
    sfMusic_play(all->music->shoot_snd);
    if (all->move->count_shoot == 25 || all->move->count_shoot == 50)
        sfMusic_play(all->music->perfect_snd);
}
