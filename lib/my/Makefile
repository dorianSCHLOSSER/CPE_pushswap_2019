##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## return
##

SRC =	my_strlen.c				\
		my_getnbr.c				\
		my_putstr.c				\
		my_list.c				\
		my_list1.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

HEADER  = 	my.h

HEADER2 = my_list.h

build:
	gcc -c -g $(SRC)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(HEADER) ../../include/
	cp $(HEADER2) ../../include/