/*
** EPITECH PROJECT, 2017
** test
** File description:
** main.c
*/

#include "../include/my.h"

int	main(void)
{
	my_printf("1 - %d, %i\n", 1234567890, 987654321);
	my_printf("2 - %s, %s\n", "azerty", "AZERTY");
	my_printf("3 - %b\n", 56);
	my_printf("4 - %o\n", 8);
	my_printf("5 - %u, %u", 123456789, -10);
	my_printf("6 - %c\n", 'A');
	my_printf("7 - %x, %X\n", 1234567890, 1234567890);
	my_printf("8 - %%\n");
	my_printf("9 - %p\n", 23);
	my_printf("10 - %S\n", "\ablabla");
}
