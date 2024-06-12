# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antonio- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 18:11:24 by antonio-          #+#    #+#              #
#    Updated: 2024/06/12 18:54:23 by antonio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SONAME = ft_display_file.so
CC = cc
FLAGS = -Wall -Wextra -Werror -I./ -c
FILES = $(wildcard *.c)
HEADERS = $(wildcard *.h) 

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
