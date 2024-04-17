# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 15:01:11 by ebmarque          #+#    #+#              #
#    Updated: 2024/04/17 17:50:17 by ebmarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = c++
FLAGS = -Wall -Wextra -Werror -g -std=c++98 -fsanitize=leak

SRC = 	src/Animal.cpp \
		src/Cat.cpp \
		src/main.cpp \
		src/Dog.cpp \
		src/WrongAnimal.cpp \
		src/WrongCat.cpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
