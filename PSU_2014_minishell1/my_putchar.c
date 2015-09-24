/*
** my_putchar.c for putchar in /home/naji_m/rendu/PSU_2014_minishell1
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Tue Jan 20 17:10:00 2015 naji moncef
** Last update Tue Jan 27 17:21:20 2015 naji moncef
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_putnbr(int nb)
{
  int	div;

  div = 1;
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  while ((nb / div) >= 10)
    {
      div = div * 10;
    }
  while (div > 0)
    {
      my_putchar((nb / div) %10 + '0');
      div = div / 10;
    }
}
