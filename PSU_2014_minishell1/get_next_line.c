/*
** get_next_line.c for get_next_line in /home/naji_m/rendu/CPE_2014_bsq
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Thu Jan 15 03:21:31 2015 naji moncef
** Last update Thu Jan 15 04:09:18 2015 naji moncef
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "my.h"
# define BUFF (1)

char	*my_realloc(char *str)
{
  char	*str2;
  int	i;

  i = 0;
  if ((str2 = malloc((my_strlen(str) + 2) * sizeof(char))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      str2[i] = str[i];
      i++;
    }
  str2[i + 1] = '\0';
  free(str);
  return (str2);
}

char	*get_next_line(const int fd)
{
  int	i;
  int	size;
  static char	buffer[BUFF];
  char	*str;

  i = 0;
  size = 0;
  if ((str = malloc(sizeof(char))) == NULL)
    return (NULL);
  str[0] = '\0';
  while ((size = read(fd, buffer, BUFF)) > 0 && buffer[0] != '\n')
    {
      str = my_realloc(str);
      str[i] = buffer[0];
      i++;
    }
  if (size == 0 && i == 0)
    return (NULL);
  return (str);
}

int	my_strlen(char	*str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
