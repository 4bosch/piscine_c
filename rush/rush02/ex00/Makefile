# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: augay <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 11:39:40 by augay             #+#    #+#              #
#    Updated: 2018/07/21 11:44:54 by augay            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=main.c ft_putchar.c

all:colle-00 colle-01 colle-02 colle-03 colle-04
	gcc -o colle-2 colle2.c print.c read.c take_xy.c compare.c ft_putstr.c ft_putnbr.c ft_putchar.c
colle-00:
	gcc -o colle-00 $(NAME) rush00.c
colle-01:
	gcc -o colle-01 $(NAME) rush01.c
colle-02:
	gcc -o colle-02 $(NAME) rush02.c
colle-03:
	gcc -o colle-03 $(NAME) rush03.c
colle-04:
	gcc -o colle-04 $(NAME) rush04.c
clean:
	rm -f colle-00 colle-01 colle-02 colle-03 colle-04
fclean:clean
		rm -f colle2
re:fclean all
