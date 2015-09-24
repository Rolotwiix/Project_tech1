/*
** putchar.c for  in /home/naji_m/rendu/colle-2_Kaki1
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Mon May  4 19:23:50 2015 naji moncef
** Last update Mon May  4 19:34:00 2015 naji moncef
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
