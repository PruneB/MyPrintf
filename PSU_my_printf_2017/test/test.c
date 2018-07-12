/*
** EPITECH PROJECT, 2017
** test.c
** File description:
** unit test printf
*/

#include <criterion/criterion.h>

Test(my_printf, test_flags)
{
	cr_assert_eq(my_printf("il était une %s !\n", "fois"));
	cr_assert_eq(my_printf("il était une %d !\n", 'r'));
		     
}
