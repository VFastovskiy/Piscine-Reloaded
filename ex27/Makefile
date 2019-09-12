# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/10 21:01:54 by kcharlet          #+#    #+#              #
#    Updated: 2019/09/10 21:26:57 by kcharlet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = display_file.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRC)
		gcc -o $(NAME) display_file.o

clean:
		/bin/rm -f display_file.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
