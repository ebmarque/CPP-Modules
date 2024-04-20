# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 20:44:02 by ebmarque          #+#    #+#              #
#    Updated: 2024/04/20 15:44:11 by ebmarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interfaces
CC = c++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98

INC = 	includes/AMateria.hpp \
		includes/Cure.hpp \
		includes/Ice.hpp \
		includes/ICharacter.hpp \
		includes/Character.hpp \
		includes/IMateriaSource.hpp \
		includes/MateriaSource.hpp 

SRCS = 	src/Ice.cpp \
		src/AMateria.cpp \
		src/Cure.cpp \
		src/Character.cpp \
		src/MateriaSource.cpp \
		src/main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INC)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY : all clean fclean re