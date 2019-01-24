/*
** EPITECH PROJECT, 2018
** create.c
** File description:
** create.c
*/

#include "hunter.h"

all_t create_window(struct s_all *all)
{
    *all = create_img(all);
    *all = init_rect(all);
    show_life(all);
    return (*all);
}

all_t create_img(struct s_all *all)
{
    all->text->tback = sfTexture_createFromFile("srcs/pics/back.png", NULL);
    all->text->sback = sfSprite_create();
    all->text->tduck = sfTexture_createFromFile("srcs/pics/DUCK.png", NULL);
    all->text->sduck = sfSprite_create();
    all->text->tcursor = sfTexture_createFromFile("srcs/pics/cursor.png", NULL);
    all->text->scursor = sfSprite_create();
    all->score->score_text = sfText_create();
    all->text->tlife = sfTexture_createFromFile("srcs/pics/life.png", NULL);
    all->text->slife = sfSprite_create();
    all->text->tlife2 = sfTexture_createFromFile("srcs/pics/life.png", NULL);
    all->text->slife2 = sfSprite_create();
    all->text->tlife3 = sfTexture_createFromFile("srcs/pics/life.png", NULL);
    all->text->slife3 = sfSprite_create();
    all->score->font = sfFont_createFromFile("srcs/font/Pacifico.ttf");
    all->move->clock = sfClock_create();
    all->music->shoot_snd = sfMusic_createFromFile("sound/shoot.ogg");
    all->music->theme_snd = sfMusic_createFromFile("sound/theme.ogg");
    all->music->perfect_snd = sfMusic_createFromFile("sound/perfect.ogg");
    return (*all);
}
