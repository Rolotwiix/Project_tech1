/*
** my_sh.c for mysh in /home/naji_m/rendu/PSU_2014_minishell1
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Tue Jan 20 16:54:18 2015 naji moncef
** Last update Tue Mar 10 11:05:14 2015 naji moncef
*/

#include "my.h"

int	my_file(char *str)
{
  char	**tabl;
  int	i;
  int	nb;

  i = 0;
  nb = nbr(str);
  printf("%d\n", nb);
  return (0);
  if ((tabl = malloc(sizeof(char *) *(nb + 1))) == NULL)
    return (0);


  return (1);
}

int	nbr(char *str)
{
  int	i;
  int	z;

  z = 1;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ':' && str[i+1] != ':' && str[i+1] != '\0')
	z++;
      i++;
    }
  return (z);
}
  
int	my_str(char *str)
{
  int	i;
  char	str2[6] = "PATH=";
  
  i = 0;
  while (str2[i] != '\0')
    {
      if (str2[i] == str[i])
	i++;
      else
	return (1);
    }
  my_file(str);
  my_putstr(str);
  return (0);
}

void	my_tab(char **env)
{
  int	i;
  
  i = 0;
  while (env[i] != NULL)
    {
      my_str(env[i]);
      i++;
    }
}

int		main(int ac, char **av, char **env)
{
  pid_t		fils;
  char		*str;

  ac = ac;
  while (1)
    {
      str = get_next_line(0);
      my_putstr("naji_m@pc-naji_m ");
      if ((fils = fork()) == -1)
	{
	  my_putstr("fork error");
	  return (0);
	}
      if (fils != 0)
	wait(&fils);
      else
	{
	  my_tab(env);
	  return (1);
	}
    }
  return (0);
}
