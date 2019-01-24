/*
** EPITECH PROJECT, 2018
** help.c
** File description:
** help.c
*/

#include "hunter.h"

int help(char **argv)
{
    if (argv[1] == NULL)
        return (0);

    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        help_header();
        help_usage();
        help_controls();
        help_credits();
        return (1);
    }
    return (0);
}

void help_header(void)
{
    my_putstr("\n *************************************");
    my_putstr("**************");
    my_putstr("\n *	       WELCOME TO MY HUNTER GAME");
    my_putstr("	   *\n");
    my_putstr(" *             -------------------------");
    my_putstr("           *\n *");
    my_putstr("		       ");
    my_putstr("				   *\n");
}

void help_usage(void)
{
    my_putstr(" *      USAGE	     ");
    my_putstr("				   *\n");
    my_putstr(" *  For play : ./my_hunter    ");
    my_putstr("			   *\n");
    my_putstr(" *             Press any button in menu ");
    my_putstr("           *\n");
    my_putstr(" *  For help : ./my_hunter -h  ");
    my_putstr("			   *\n");
    my_putstr(" *	                                    ");
    my_putstr("	   *\n *");
    my_putstr("			  ");
    my_putstr("			   *\n");
}

void help_controls(void)
{
    my_putstr(" *      CONTROLS IN GAME       ");
    my_putstr("			   *\n");
    my_putstr(" *  EXIT : red cross button     ");
    my_putstr("		   *\n *");
    my_putstr("	   Press EXIT Button in game");
    my_putstr("		   *");
    my_putstr("\n *			    ");
    my_putstr("			   *");
}

void help_credits(void)
{
    my_putstr("\n *      CREDITS		");
    my_putstr("			   *\n");
    my_putstr(" *  This game was developped by Sacha");
    my_putstr(" GOUALIER     *\n *");
    my_putstr("  All right reserved");
    my_putstr(" to EPITECH                  *\n *");
    my_putstr("				 ");
    my_putstr("		   *\n");
    my_putstr(" ***********************************");
    my_putstr("****************\n\n");
}
