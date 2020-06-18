##
## EPITECH PROJECT, 2019
## makefile
## File description:
## return
##

SRC = 	main.c		\
		my_pushswap.c

OBJ = $(SRC:.c=.o)

NAME = push_swap

FLAGS =  -Llib/my -lmy
#-Iinclude

all:
	make -C lib/my build
	gcc -g -o $(NAME) $(SRC) $(FLAGS)

clean:
		rm -f $(OBJ)
		rm -f ./lib/my/*.o
		rm -f vgcore.*

fclean: clean
		rm -f $(NAME)
		rm -f ./lib/*.a
		rm -f ./lib/my/*.a

re: fclean all