##
## Makefile for Makefile in /home/naji_m/rendu/PSU_2014_minishell1
## 
## Made by naji moncef
## Login   <naji_m@epitech.net>
## 
## Started on  Tue Jan 20 16:01:23 2015 naji moncef
## Last update Mon Mar  9 17:38:17 2015 naji moncef
##

CC	= gcc

SRC	= my_sh.c \
	 get_next_line.c \
	 my_putchar.c

RM	= rm -f

CFLAGS	+= -Wall -pedantic -ansi -Wextra -W -g3

NAME	= mysh

OBJ	= $(SRC:.c=.o)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		clean fclean all

.PHONY:		all clean fclean re
