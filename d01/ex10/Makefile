# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/06 13:40:54 by jaguillo          #+#    #+#              #
#    Updated: 2015/04/07 17:55:21 by jaguillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cato9tails

C_DIR =
H_DIR =
O_DIR = o/

FLAGS = -Wall -Wextra -Werror -O2

CPP_FILES = main.cpp Cat.cpp

O_FILES = $(CPP_FILES:$(C_DIR)%.cpp=$(O_DIR)%.o)

MSG_0 = "\r\033[0;32m%-20.20s\033[0;0m\r"
MSG_1 = "\r\033[0;31m%-20.20s\033[0;0m\n"

all: _init $(NAME) _end

$(NAME): $(O_FILES)
	@printf $(MSG_0) "$@"
	@clang++ $(FLAGS) -o $(NAME) $(O_FILES) && echo || printf $(MSG_1) "$@"

$(O_DIR)%.o: $(C_DIR)%.cpp $(H_DIR)%.hpp
	@printf $(MSG_0) "$<"
	@clang++ $(FLAGS) -c -o $@ $< || printf $(MSG_1) "$<"

$(O_DIR)%.o: $(C_DIR)%.cpp
	@printf $(MSG_0) "$<"
	@clang++ $(FLAGS) -I$(O_DIR) -c -o $@ $< || printf $(MSG_1) "$<"

clean:
	@rm -f $(O_FILES) 2> /dev/null || true
	@rm -f $(GCH_FILES) 2> /dev/null || true
	@rmdir $(O_DIR) 2> /dev/null || true

fclean: clean
	@rm -f $(NAME)

re: fclean all

_init:
	@tput civis
	@mkdir $(O_DIR) 2> /dev/null || true

_end:
	@tput cnorm

.PHONY: all clean fclean re _init _end
