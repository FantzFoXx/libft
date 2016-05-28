# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: udelorme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 17:09:04 by udelorme          #+#    #+#              #
#    Updated: 2016/04/29 11:09:53 by udelorme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
BIN = exec
INCREP = includes/
OBJREP = obj/
FLAGS = -Wall -Werror -Wextra
SRCLIBC = $(shell find .  -maxdepth 1 -type f | grep ".c$$" \
	| grep -vE "(/\.|main\.c|/\#)" )
SRC = $(SRCLIBC)

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) -c $(SRC) -I $(INCREP)
	ar rc $(NAME) $(OBJ)
	mv $(OBJ) $(OBJREP)

clean :
	cd $(OBJREP) && rm -f $(OBJ)

fclean : clean
	rm -rf $(NAME)
	rm -rf $(BIN)

re : fclean all

.PHONY: all clean fclean re
