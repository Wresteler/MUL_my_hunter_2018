/*
** EPITECH PROJECT, 2018
** basics.c
** File description:
** basics.c
*/

#include "hunter.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (; *str != '\0'; str++)
        my_putchar(*str);
}
