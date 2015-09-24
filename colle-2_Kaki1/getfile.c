/*
** getfile.c for get_file in /home/naji_m/rendu/colle-2_Kaki1
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Mon May  4 20:37:37 2015 naji moncef
** Last update Mon May  4 21:01:41 2015 naji moncef
*/

#include "my.h"

static int	my_strlen(char *str)
{
  int		i;

  i = 0;
  if (str != NULL)
    while (str[i] != '\0')
      i++;
  return (i);
}

static char	*konkat(char *stock, char *buff, int nbr)
{
  char	*tmp;
  int	i;
  int	a;

  tmp = stock;
  if ((stock = malloc(my_strlen(tmp) + my_strlen(buff) + 1)) == NULL)
    return (NULL);
  i = 0;
  if (tmp != NULL)
    while (tmp[i])
      stock[i] = tmp[i++];
  a = 0;
  while (a < nbr)
    {
      stock[i] = buff[a];
      i++;
      a++;
    }
  stock[i] = '\0';
  if (tmp != NULL)
    free(tmp);
  return (stock);
}

char	*getfile(int fd)
{
  char	*stock;
  char	buff[READ + 1];
  int	nbr;

  stock = NULL;
  nbr = READ;
  while (nbr == READ)
    {
      if ((nbr = read(READING)) == -1)
	return (NULL);
      buff[nbr] = '\0';
      if ((stock = konkat(stock, buff, nbr)) == NULL)
	return (NULL);
    }
  return (stock);
}

int	my_getnbr(char *str)
{
  int	nbr;
  int	i;

  nbr = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  my_putstr("error getnbr");
	  exit(1);
	}
      i++;
    }
  i = 0;
  while (str[i] != '\0')
    nbr = nbr * 10 + (str[i++] - '0');
  return (nbr);
}
