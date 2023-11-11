# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 08:56:05 by pcazac            #+#    #+#              #
#    Updated: 2023/11/11 02:36:55 by pcazac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := get_next_line.a

SRC := get_next_line.c get_next_line_utils.c

OBJ_DIR := obj
SRC_DIR := src

OBJ := $(SRC:%.c=$(OBJ_DIR)/%.o)

CC= cc
CFLAGS= -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Building $@..."
	@ar rcs $@ $^
	@echo "$@ built successfully."

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning up object files..."
	/bin/rm -rf $(OBJ_DIR)

fclean: clean
	@echo "Cleaning up $(NAME)"
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re