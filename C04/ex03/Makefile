# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 20:44:02 by ebmarque          #+#    #+#              #
#    Updated: 2024/04/17 20:48:25 by ebmarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interfaces
CC = c++
CFLAGS = -Wall -Werror -Wextra -g -std:c++98

INC = 
SRCS =
OBJS = (SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -fr $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all

.PHONY : all clean fclean re