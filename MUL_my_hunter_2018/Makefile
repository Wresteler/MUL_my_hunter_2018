##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

CC		=	gcc

RM		=	rm -f

NAME		=	my_hunter

COMPILEFLAG	=	-Wall -Wextra -pedantic -std=c99 -g

INCLUDE		=	-Iinclude/

USELESS_F	=	*~

U_F_SRC		=	srcs/*~

U_F_INC		=	include/*~

U_F_UTEST	=	unit_tests/*~

U_F_VG		=	vgcore.*

DEBUG		=	with debug

UTEST_BIN	=	srcs/*.gcda

UTEST_BIN_U	=	unit_tests/*.gcda

UTEST_OBJ	=	srcs/*.gcno

UTEST_OBJ_U	=	unit_tests/*.gcno

LIBFLAGS	=	-lc_graph_prog

CFLAGS		=	$(COMPILEFLAG) $(INCLUDE) $(LIBFLAGS)

SRC		=	main.c			\
			srcs/menu.c		\
			srcs/basics.c		\
			srcs/help.c		\
			srcs/malloc.c		\
			srcs/init.c		\
			srcs/create.c		\
			srcs/data.c		\
			srcs/window.c		\
			srcs/event.c		\
			srcs/destroy.c		\
			srcs/set_draw.c		\
			srcs/calc_score.c	\
			srcs/life.c		\
			srcs/cursor.c

OBJ		=	$(SRC:.c=.o)

$(OBJDIR)%.o:		%.c
			@$(CC) $(CFLAGS) -o $@ -c $<
			@if test -s $*.c; then \
			echo -e "\033[01m\033[35m Compiling $(DEBUG)\033[00m\
			\033[36m$(SRCPATH)$*.c\033[032m  [OK]\033[00m";\
			else \
			echo -e "\033[01m\033[33m Compiling $(DEBUG)\033[00m\
			\033[36m$(SRCPATH)$*.c\033[00m\  [Error]"; fi

$(NAME):		$(OBJ)
			@echo -e "\033[01m\033[31mLinking ...\033[00m"
			@$(CC) $(OBJ) -o $(NAME) $(CFLAGS)
			@echo -e "\033[01m\033[32mCompilation done => ${NAME}\033[00m"

all:			$(NAME)

clean:
			@$(RM) $(OBJ)
			@$(RM) $(UTEST_BIN)
			@$(RM) $(UTEST_OBJ)
			@$(RM) $(UTEST_BIN_U)
			@$(RM) $(UTEST_OBJ_U)
			@$(RM) $(USELESS_F)
			@$(RM) $(U_F_SRC)
			@$(RM) $(U_F_INC)
			@$(RM) $(U_F_UTEST)
			@$(RM) $(U_F_VG)
			@echo -e "\033[01m\033[31mRemoving objects ...\033[00m"

fclean:			clean
			@$(RM) $(NAME)
			@echo -e "\033[01m\033[31mRemoving binary : {${NAME}} ...\033[00m"

re:			fclean all

.PHONY:			all clean fclean re
