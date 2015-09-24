/*
** fprime.c for test in /home/naji_m/rendu/TEST/trace
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Thu May 21 21:46:01 2015 naji moncef
** Last update Mon May 25 23:20:41 2015 naji moncef
*/

int	main(int ac, char **av)
{
  int	i;
  int	nb;

  nb = atoi(av[1]);
  while (nb > 1)
    {
      i = 2;
      while ((nb % i) != 0)
	{
	  i++;
	}
      printf("%d", i);
      nb = nb / i;
    }
}
