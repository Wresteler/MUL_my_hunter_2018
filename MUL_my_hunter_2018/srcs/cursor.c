/*
** EPITECH PROJECT, 2018
** cursor.c
** File description:
** cursor.c
*/

#include "hunter.h"

void set_cursor(struct s_all *all)
{
    all->move->pos_cursor = sfMouse_getPositionRenderWindow(all->window);
    sfRenderWindow_setMouseCursorVisible(all->window, 0);
    all->move->pos_cursor2.x = all->move->pos_cursor.x;
    all->move->pos_cursor2.y = all->move->pos_cursor.y;
    sfSprite_setPosition(all->text->scursor, all->move->pos_cursor2);
    sfRenderWindow_display(all->window);
}
