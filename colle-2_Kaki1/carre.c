/*
** carre.c for  in /home/naji_m/rendu/colle-2_Kaki1
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Mon May  4 19:06:58 2015 naji moncef
** Last update Mon May  4 22:44:09 2015 naji moncef
*/
#include "my.h"

int	main(int ac, char **av)
{
  t_list	my;

  my_putstr("Veuillez entrer la longueur precedé d'un -L\n");
  init_carre(&my);
  return (0);
}

int	init_carre(t_list *my)
{
  int	l;
  int	L;

  my->buff = getfile(0);
  my_putstr(my->buff);

}
