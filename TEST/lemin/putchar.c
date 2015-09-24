/*
** putchar.c for putchar in /home/naji_m/rendu/TEST/lemin
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Fri Apr 24 13:48:00 2015 naji moncef
** Last update Fri Apr 24 13:49:36 2015 naji moncef
*/

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
