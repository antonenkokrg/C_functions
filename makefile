# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 13:56:55 by ilantone          #+#    #+#              #
#    Updated: 2019/10/23 13:24:28 by ilantone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
OBJECTS = *.o
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar -rv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
