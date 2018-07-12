/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** header for all my .c
*/

#ifndef MY_
#define MY_

int	deal_with_s_major(char *str);
int	deal_with_p(int nb);
void	deal_with_b(int nb);
void	deal_with_o(int nb);
void	deal_with_x(int nb);
void	deal_with_x_major(int nb);
void	deal_with_u(int nb);
void	my_putchar(char c);
int	my_putstr(char *str);
int	my_put_nbr(int nb);
int	my_put_nbr_u(unsigned int nb);
int	deal_with_S(char *str);
int	my_strlen(char const *str);
int	my_put_nbr_base(int nb, char const *base);
int	my_printf(char *format, ...);

#endif
