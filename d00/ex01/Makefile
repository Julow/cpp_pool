# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/06 13:40:54 by jaguillo          #+#    #+#              #
#    Updated: 2015/04/06 15:23:04 by jaguillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

C_DIR =
H_DIR =
O_DIR = o/

FLAGS = -Wall -Wextra -Werror

CPP_FILES = main.cpp PhoneBook.cpp Contact.cpp

O_FILES = $(CPP_FILES:$(C_DIR)%.cpp=$(O_DIR)%.o)

all: $(NAME)

$(NAME): $(O_FILES)
	@clang++ $(FLAGS) -o $(NAME) $(O_FILES)
	@echo "OK"

$(O_DIR)%.o: $(C_DIR)%.cpp $(H_DIR)%.hpp
	@mkdir $(O_DIR) 2> /dev/null || true
	@clang++ $(FLAGS) -c -o $@ $<
	@echo "$<"

$(O_DIR)%.o: $(C_DIR)%.cpp
	@mkdir $(O_DIR) 2> /dev/null || true
	@clang++ $(FLAGS) -c -o $@ $<
	@echo "$<"

clean:
	@rm -f $(O_FILES) 2> /dev/null || true
	@rmdir $(O_DIR) 2> /dev/null || true

fclean: clean
	@rm -f $(NAME)

re: fclean all
