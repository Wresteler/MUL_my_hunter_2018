/*
** EPITECH PROJECT, 2018
** destroy.c
** File description:
** destroy.c
*/

#include "hunter.h"

void destroy_it(struct s_all *all)
{
    if (all->move->count_respawn == 3) {
        sfTexture_destroy(all->text->tover);
        sfSprite_destroy(all->text->sover);
        sfMusic_destroy(all->music->g_over_snd);
    }
    sfSprite_destroy(all->text->sback);
    sfTexture_destroy(all->text->tback);
    sfTexture_destroy(all->text->tduck);
    sfSprite_destroy(all->text->sduck);
    sfTexture_destroy(all->text->tlife);
    sfSprite_destroy(all->text->slife);
    sfTexture_destroy(all->text->tcursor);
    sfSprite_destroy(all->text->scursor);
    sfClock_destroy(all->move->clock);
    sfMusic_destroy(all->music->shoot_snd);
    sfMusic_destroy(all->music->theme_snd);
    sfMusic_destroy(all->music->perfect_snd);
    sfRenderWindow_destroy(all->window);
}

void free_it(struct s_all *all)
{
    free(all->music);
    free(all->move);
    free(all->text);
    free(all->score);
    free(all->menu);
    free(all);
}

void destroy_and_free(struct s_all *all)
{
    sfRenderWindow_close(all->window);
    destroy_it(all);
//    free_it(all);
}

void destroy_menu(struct s_all *all)
{
    sfTexture_destroy(all->menu->tmenu);
    sfSprite_destroy(all->menu->smenu);
    sfMusic_destroy(all->music->menu_snd);
}
