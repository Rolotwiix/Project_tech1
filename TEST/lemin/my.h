/*
** my.h for my.h in /home/naji_m/rendu/TEST/lemin
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Wed Apr 22 16:03:54 2015 naji moncef
** Last update Mon Apr 27 13:34:19 2015 naji moncef
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
  char	**fiche;
  char	**tube_01;
  char	**tube_02;
  char	*start;
  char	*end;
  int	nbr_f;
}	t_list;

int		parsing(t_list *my);
static int	my_strlen(char *str);
static char	*konkat(char *stock, char *buff, int nbr);
char		*getfile(int fd);
int		my_getnbr(char *str);
void		my_putchar(char c);
void		my_putstr(char *str);
void		feel_tab(t_list *my);

#endif /* MY_H_ !*/
