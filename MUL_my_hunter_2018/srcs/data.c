/*
** EPITECH PROJECT, 2018
** data.c
** File description:
** data.c
*/

#include "hunter.h"

all_t respawn_data(struct s_all *all)
{
    if (sfSprite_getPosition(all->text->sduck).x > 1280) {
        all->move->respawn.y = rand() %450;
        sfSprite_setPosition(all->text->sduck, all->move->respawn);
        all->move->move.x -= 0.1;
        all->move->count_respawn++;
        all->move->move.y += 0.06;
    }
    check_wall(all);
    *all = rm_life(all);
    return (*all);
}

all_t rm_life(struct s_all *all)
{
    if (all->move->count_respawn == 1)
        all->score->pos_life3.x = 1400;
    if (all->move->count_respawn == 2)
        all->score->pos_life2.x = 1400;
    if (all->move->count_respawn == 3) {
        all->score->pos_life3.x = 1400;
        *all = death_data(all);
        return (*all);
    }
    if (all->move->seconds > 0.3) {
        if (all->rect.left == 220)
            all->rect.left = - 110;
        all->rect.left = all->rect.left + 110;
        sfClock_restart(all->move->clock);
    }
    return (*all);
}

void check_wall(struct s_all *all)
{
    if (sfSprite_getPosition(all->text->sduck).y > 600)
        all->move->move.y -= 0.06;
    if (sfSprite_getPosition(all->text->sduck).y < 10)
        all->move->move.y += 0.06;
}

all_t death_data(struct s_all *all)
{
    all->text->tover = sfTexture_createFromFile
    ("srcs/pics/game_over.png", NULL);
    all->text->sover = sfSprite_create();
    all->music->g_over_snd = sfMusic_createFromFile("sound/g_over.ogg");
    sfSprite_setTexture(all->text->sover, all->text->tover, sfFalse);
    sfRenderWindow_drawSprite(all->window, all->text->sover, NULL);
    sfRenderWindow_display(all->window);
    sfMusic_play(all->music->g_over_snd);
    all->flag = 1;
    all->rect.width = 0;
    all->rect.height = 0;
    sfSleep(sfSeconds(4));
    all->move->seconds = 0;
    destroy_and_free(all);
    return (*all);
}
