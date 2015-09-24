##
## Makefile for Makefile in /home/naji_m/rendu/TEST/lemin
## 
## Made by naji moncef
## Login   <naji_m@epitech.net>
## 
## Started on  Wed Apr 22 16:09:39 2015 naji moncef
## Last update Fri Apr 24 13:49:56 2015 naji moncef
##

CC	= gcc

RM	= rm -f

SRC	= lemin.c \
	 tools.c \
	 putchar.c

OBJ	= $(SRC:.c=.o)

NAME	= lemin

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
