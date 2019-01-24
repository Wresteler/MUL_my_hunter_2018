/*
** EPITECH PROJECT, 2018
** set_draw.c
** File description:
** set_draw.c
*/

#include "hunter.h"

void set_and_draw(struct s_all *all)
{
    set_texture(all);
    draw_sprite(all);
    set_sprite_pos_and_text(all);
    sfRenderWindow_display(all->window);
    all->move->mouse = sfMouse_getPositionRenderWindow(all->window);
    all->move->duck = sfSprite_getPosition(all->text->sduck);
    all->move->time = sfClock_getElapsedTime(all->move->clock);
    all->move->seconds = all->move->time.microseconds / 1000000.0;
}

void set_texture(struct s_all *all)
{
    sfSprite_setTexture(all->text->sback, all->text->tback, sfFalse);
    sfSprite_setTexture(all->text->sduck, all->text->tduck, sfFalse);
    sfSprite_setTexture(all->text->slife, all->text->tlife, sfFalse);
    sfSprite_setTexture(all->text->slife2, all->text->tlife2, sfFalse);
    sfSprite_setTexture(all->text->slife3, all->text->tlife3, sfFalse);
    sfSprite_setTexture(all->text->scursor, all->text->tcursor, sfFalse);
    sfSprite_setTextureRect(all->text->sduck, all->rect);
}

void draw_sprite(struct s_all *all)
{
    sfRenderWindow_drawSprite(all->window, all->text->sback, NULL);
    sfRenderWindow_drawSprite(all->window, all->text->sduck, NULL);
    sfRenderWindow_drawSprite(all->window, all->text->slife, NULL);
    sfRenderWindow_drawSprite(all->window, all->text->slife2, NULL);
    sfRenderWindow_drawSprite(all->window, all->text->slife3, NULL);
    sfRenderWindow_drawSprite(all->window, all->text->scursor, NULL);
}

void set_sprite_pos_and_text(struct s_all *all)
{
    sfSprite_move(all->text->sduck, all->move->move);
    sfSprite_setPosition(all->text->slife, all->score->pos_life);
    sfSprite_setPosition(all->text->slife2, all->score->pos_life2);
    sfSprite_setPosition(all->text->slife3, all->score->pos_life3);
    sfText_setPosition(all->score->score_text, all->score->pos);
    sfText_setString(all->score->score_text, stos(all->move->count_shoot));
    sfText_setFont(all->score->score_text, all->score->font);
    sfText_setCharacterSize(all->score->score_text, 50);
    sfRenderWindow_drawText(all->window, all->score->score_text, NULL);
}
