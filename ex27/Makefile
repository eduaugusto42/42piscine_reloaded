# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduaaugu <eduaaugu@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/18 17:24:11 by eduaaugu          #+#    #+#              #
#    Updated: 2026/05/22 14:56:38 by eduaaugu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c \
	  ft_display_file.c \
	  ft_putstr.c

OBJ = $(SRC:.c=.o)

INCLUDES = includes

ifeq ($(DEBUG), 1)
	CFLAGS += -g3 -O0
endif

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
