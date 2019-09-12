# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/10 18:06:05 by kcharlet          #+#    #+#              #
#    Updated: 2019/09/12 16:52:26 by kcharlet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	   			srcs/ft_strlen.c srcs/ft_swap.c

OUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLUDES = includes/

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
		ar rc $(NAME) $(OUT)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OUT)

fclean:	clean
		/bin/rm -f $(NAME)

re: fclean all
