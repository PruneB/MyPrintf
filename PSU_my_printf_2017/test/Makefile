##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile test
##

SRC	=	main.c				\
		../src/deal_with_other.c	\
		../src/deal_with_base.c		\
		../src/deal_with_c_s_d.c	\
		../src/my_printf.c		\
		../src/my_put_nbr_base.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Werror

NAME	=	test

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)
		./$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
