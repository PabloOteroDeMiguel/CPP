# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: potero <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 17:31:34 by potero            #+#    #+#              #
#    Updated: 2022/10/19 11:18:49 by potero-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = megaphone

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
		@echo "$(BLUE)Getting ready$(NORMAL)"
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		clear
		@echo "$(GREEN)Megaphone switched on$(NORMAL)"

all: $(NAME)

clean:
		$(RM) $(OBJS)
		clear
		@echo "$(RED)Megaphone switched off$(NORMAL)"

fclean: clean
		$(RM) $(NAME)
		clear
		@echo "$(RED)Megaphone switched off$(NORMAL)"

re: fclean $(NAME)

.PHONY: all clean fclean re
