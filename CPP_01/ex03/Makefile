# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: potero-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 10:37:46 by potero-d          #+#    #+#              #
#    Updated: 2022/10/25 21:27:38 by potero           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = weapon
CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

%.o:%.cpp
		$(CC) $(CFLAGS) -c  $< -o $(<:.cpp=.o) 
RM = rm -f

BLUE = \033[0;34m
GREEN = \033[1;32m
RED= \033[0;31m
NORMAL = \033[0m


$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		clear
		@echo "$(GREEN)Weapons ready$(NORMAL)"

all: $(NAME)

clean:
		$(RM) $(OBJS)
		clear
		@echo "$(RED)Stowed weapons$(NORMAL)"

fclean: clean
		$(RM) $(NAME)
		clear
		@echo "$(RED)Stowed weapons$(NORMAL)"

re: fclean $(NAME)

.PHONY: all clean fclean re
