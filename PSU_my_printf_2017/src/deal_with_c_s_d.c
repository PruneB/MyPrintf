/*
** EPITECH PROJECT, 2017
** deal_with_c_d_s.c
** File description:
** first flag
*/

#include <unistd.h>
#include "../include/my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int	my_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
	return (0);
}

int	my_put_nbr(int nb)
{
	if (nb < 0) {
		my_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10) {
		my_put_nbr(nb / 10);
		my_put_nbr(nb % 10);
	}
	else
		my_putchar(nb + '0');
	return (0);
}

int	my_put_nbr_u(unsigned int nb)
{
	if (nb >= 10) {
		my_put_nbr(nb / 10);
		my_put_nbr(nb % 10);
	}
	else
		my_putchar(nb + '0');
	return (0);
}
