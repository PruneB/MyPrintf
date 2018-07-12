/*
** EPITECH PROJECT, 2018
** deal_with_other.c
** File description:
** dealwithother
*/

#include <unistd.h>
#include "../include/my.h"

int	deal_with_p(int nb)
{
	my_putstr("0x");
	my_put_nbr_base(nb, "0123456789abcdef");
	return(0);
}

int	deal_with_s_major(char *str)
{
	int i = 0;
	int nb;

	while (str[i]) {
		nb = str[i];
		if (str[i] < 8) {
			my_putstr("\\");
			my_putstr("00");
			my_put_nbr_base(nb, "01234567");
		} else if (str[i] < 32 && str[i] >= 8) {
			my_putstr("\\");
			my_putchar('0');
			my_put_nbr_base(nb, "01234567");
		} else if (str[i] >= 127) {
			my_putstr("\\");
			my_put_nbr_base(nb, "01234567");
		} else {
			my_putchar(str[i]);
		}
		i++;
	}
	return(0);
}
