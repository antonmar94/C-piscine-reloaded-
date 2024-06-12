# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antonio- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 18:11:24 by antonio-          #+#    #+#              #
#    Updated: 2024/06/12 18:28:34 by antonio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SONAME = libft.so
CC = cc
FLAGS = -Wall -Wextra -Werror -I./ -c
FILES = $(wildcard src/*.c)
HEADERS = $(wildcard includes/*.h) 

OBJ = $(FILES:src/%.c=%.o)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(HEADERS) $(OBJ)

$(OBJ): $(FILES)
		gcc $(FLAGS) $(HEADERS) $(FILES)

all: $(NAME)

clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
		rm -f $(SONAME)
re: fclean all

so:		
		gcc -shared -o $(SONAME) -fPIC $(FILES)

.PHONY: all clean fclean re so bonus
