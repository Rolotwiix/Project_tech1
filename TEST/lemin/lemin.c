/*
** lemin.c for lemin test in /home/naji_m/rendu/TEST/lemin
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Wed Apr 22 16:02:23 2015 naji moncef
** Last update Mon Apr 27 14:23:45 2015 naji moncef
*/
#include "my.h"
#include <stdio.h>
int	main(int ac, char **av)
{
  t_list	my;

  parsing(&my);
  return (0);
}

int	parsing(t_list *my)
{
  int	i;
  int	lgn;

  i = 0;
  lgn = 1;
  my->buff = getfile(0);
  while (my->buff[i] != '\0')
    {
      if (my->buff[i] == '\n')
	lgn++;
      i++;
    }
  if ((my->fiche = malloc(sizeof(char *) *(lgn+1))) == NULL)
    return (1);
  printf("%s\n", my->buff);
  part_2(my);
  return (0);
}

int	part_2(t_list *my)
{
  int	i;
  int	c;
  int	z;

  z = 0;
  i = 0;
  c = 0;
  while (my->buff[i] != '\0')
    {
      if (my->buff[i + 1] == '\n' || my->buff[i + 1] == '\0');
      {
	if ((my->fiche[z] = malloc(sizeof(char) * (c+1))) == NULL)
	  return (1);
	c = 0;
	z++;
      }
      i++;
      c++;
    }
  my->fiche[z] = NULL;
  feel_tab(my);
  return (0);
}

void	feel_tab(t_list *my)
{
  int	i;
  int	c;
  int	lgn;

  lgn = 0;
  i = 0;
}
