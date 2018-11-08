# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wconnell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 14:18:57 by wconnell          #+#    #+#              #
#    Updated: 2018/10/30 13:13:06 by wconnell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o ft_strlen.o

INC = includes/

all:	libft.a 

$(NAME):
	gcc -Wall -Wextra -Werror -c -I ./includes/ srcs/ft_*.c
	ar rc $(NAME) $(OO)

clean:
	/bin/rm -f $(OO)

fclean:		clean
	/bin/rm -f $(NAME)

re: fclean all
