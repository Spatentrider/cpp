# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 15:52:34 by ffrau             #+#    #+#              #
#    Updated: 2022/06/18 19:02:33 by ffrau            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= amateria

CC				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			=	main.cpp			\
					AMateria.cpp		\
					Character.cpp		\
					Cure.cpp			\
					Ice.cpp				\
					MateriaSource.cpp	\

OBJ				= $(SRCS:.cpp=.o)

%.o:			%.cpp
				@$(CC) $(CFLAGS) -g -c $< -o $@

RM				= rm -rf

$(NAME):		$(OBJ)
				@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all:			$(NAME)

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

run:			re
				@./$(NAME)
				make fclean -C ./

leaks:			re
				leaks --atExit -- ./$(NAME)
				make fclean -C ./

.PHONY:			all clean fclean re