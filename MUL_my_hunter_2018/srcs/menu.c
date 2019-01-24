/*
** EPITECH PROJECT, 2018
** menu.c
** File description:
** menu.c
*/

#include "hunter.h"

all_t *launch_menu(struct s_all *all)
{
    sfVideoMode mode = {1280, 769, 32};

    all->window = sfRenderWindow_create
    (mode, "My Hunter", sfClose | sfResize, NULL);
    all->menu->end_menu = 0;
    all->flag = 0;
    all->menu->tmenu = sfTexture_createFromFile("srcs/pics/menu.png", NULL);
    all->menu->smenu = sfSprite_create();
    sfSprite_setTexture(all->menu->smenu, all->menu->tmenu, sfFalse);
    sfRenderWindow_drawSprite(all->window, all->menu->smenu, NULL);
    all->music->menu_snd = sfMusic_createFromFile("sound/menu.ogg");
    sfRenderWindow_display(all->window);
    while (sfRenderWindow_isOpen(all->window))
        *all = init_menu(all);
    return (all);
}

all_t init_menu(struct s_all *all)
{
    if ((all->flag == 0) && all->menu->end_menu != 1) {
        sfMusic_play(all->music->menu_snd);
        all->flag = 1;
    }
    while (sfRenderWindow_pollEvent(all->window, &all->move->event)) {
        if (all->move->event.type == sfEvtKeyPressed) {
            all->menu->end_menu = 1;
            destroy_menu(all);
        }
        if (all->move->event.type == sfEvtClosed) {
            sfRenderWindow_close(all->window);
            destroy_menu(all);
            return (*all);
        }
    }
    end_menu(all);
    return (*all);
}

void end_menu(struct s_all *all)
{
    if (all->menu->end_menu == 1) {
        *all = create_window(all);
        *all = init_var(all);
        sfMusic_play(all->music->theme_snd);
        while (all->move->count_respawn != 3)
            *all = window_open(all);
    }
}
