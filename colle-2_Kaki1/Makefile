##
## Makefile for Makefile in /home/naji_m/rendu/colle-2_Kaki1
## 
## Made by naji moncef
## Login   <naji_m@epitech.net>
## 
## Started on  Mon May  4 19:01:49 2015 naji moncef
## Last update Mon May  4 21:03:18 2015 naji moncef
##

CC	= gcc

RM	= rm -f

SRC	= carre.c \
	 getfile.c \
	 putchar.c

OBJ	=$(SRC:.c=.o)

NAME	= carre

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(SRC)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		make re clean fclean
