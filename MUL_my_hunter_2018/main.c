/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main.c
*/

#include "hunter.h"

int main(int argc, char **argv, char **env)
{
    all_t *all = 0;

    if (argc > 2)
        return (84);
    if (env[0] == NULL) {
        write(2, "Error: Can't log game without env !\n", 36);
        return (84);
    }
    if (help(argv) == 1)
        return (0);

    all = malloc_struct(all);
    if (all == NULL || all->menu == NULL
        || all->move == NULL || all->text == NULL || all->score == NULL)
        return (84);
    launch_menu(all);
    return (0);
}
