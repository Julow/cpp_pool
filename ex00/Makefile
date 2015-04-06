# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/06 13:40:54 by jaguillo          #+#    #+#              #
#    Updated: 2015/04/06 13:57:09 by jaguillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -o $(NAME) $(SRCS)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
