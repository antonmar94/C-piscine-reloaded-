# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antonio- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 18:11:24 by antonio-          #+#    #+#              #
#    Updated: 2024/06/15 12:56:08 by antonio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SONAME = ft_display_file.so
CC = cc
FLAGS = -Wall -Wextra -Werror -I./ -c
FILES = ft_display_file.c 

OBJ = $(FILES:%.c=%.o)

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

$(OBJ): $(FILES)
		$(CC) $(FLAGS) $(FILES)

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
