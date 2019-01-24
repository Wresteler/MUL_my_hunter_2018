/*
** EPITECH PROJECT, 2018
** score.c
** File description:
** score.c
*/

#include "hunter.h"

int neg(int i)
{
    if (i < 0)
        return (-i);
    else
        return (i);
}

int divi(int i)
{
    int result = 0;

    for (int count = 1; count == 1 || i != 0; result++) {
        count = 0;
        i /= 10;
    }
    return (result);
}

int mult(int i)
{
    int power = 1;

    for (; i > 1; i--)
        power *= 10;
    return (power);
}

char *stos(int count_shoot)
{
    int is_neg = 0;
    int cmp = 0;
    int offset = 0;
    int count_shot = count_shoot + ((count_shoot < -2147483647) ? 1 : 0);
    int digit_count = divi(neg(count_shot));
    char *result = malloc(sizeof(*result) * (digit_count + 1));

    if (count_shoot < 0) {
        is_neg = 1;
        result[(offset++)] = '-';
    }
    for (int tmp = 0; digit_count > 0; digit_count--) {
        tmp = count_shoot / mult(digit_count);
        cmp = tmp % 10;
        cmp *= ((is_neg) ? -1 : 1);
        result[(offset++)] = + cmp + 48;
    }
    result[(offset++)] = 0;
    return (result);
}
