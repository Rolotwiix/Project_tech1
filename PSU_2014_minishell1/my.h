/*
** my.h for my.h in /home/naji_m/rendu/PSU_2014_minishell1
** 
** Made by naji moncef
** Login   <naji_m@epitech.net>
** 
** Started on  Tue Jan 20 16:55:32 2015 naji moncef
** Last update Fri Mar  6 17:17:29 2015 naji moncef
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <stdlib.h>

int	my_file(char *str);
int	nbr(char *str);
int	my_str(char *str);
void	my_tab(char **env);
void	my_putchar(char c);
int	my_strlen(char *str);
void	my_putstr(char *str);
void	my_putnbr(int nb);
char	*get_next_line(const int fd);

#endif /* MY_H_ */
