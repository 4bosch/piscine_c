# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abosch <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/20 11:11:57 by abosch            #+#    #+#              #
#    Updated: 2018/07/20 12:04:38 by abosch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE = includes

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c -i $(INCLUDE)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib libft.a

clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -f libft.a

re: fclean all
