/*
** builtin.c for builtin in /home/naji_m/rendu/TEST/42sh
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Mon May 11 14:12:50 2015 naji moncef
** Last update Thu May 21 17:30:29 2015 naji moncef
*/
#include <string.h>

const t_list	g_tabfnct[] = {
  {"~", &my_home},
  {"--", &my_home},
  {"-",  &previous},
  {"\0", NULL}
};

void	builtin_cd(char *str)
{
  int           i;
  int		ok;

  ok = 0;
  i = 0;
  if (str == NULL)
    my_home();
  while (g_tabfnct[i].detect != '\0')
    {
      if (strcmp(g_tabfnct[i].detect, str) > 0)
        {
          g_tabfnct[i].fct;
	  ok = 1;
        }
      i = i + 1;
    }
  if (!ok)
    my_chdir(str);
}
