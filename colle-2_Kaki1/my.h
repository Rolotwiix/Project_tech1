/*
** my.h for my.h in /home/naji_m/rendu/colle-2_Kaki1
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Mon May  4 19:32:16 2015 naji moncef
** Last update Mon May  4 21:04:03 2015 naji moncef
*/
#ifndef MY_H_
# define MY_H_

# define READ 1000
# define READING fd, buff, READ

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
  char	*buff;
}       t_list;

static int	my_strlen(char *str);
int		my_getnbr(char *str);
static char	*konkat(char *stock, char *buff, int nbr);
char		*getfile(int fd);
int		init_carre(t_list *my);
void		my_putstr(char *str);
void		my_putchar(char c);

#endif /* MY_H_ !*/
