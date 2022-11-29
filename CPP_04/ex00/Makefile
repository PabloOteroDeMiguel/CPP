# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: potero-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 10:37:46 by potero-d          #+#    #+#              #
#    Updated: 2022/11/29 11:47:26 by potero-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp 

OBJS = $(SRCS:.cpp=.o)

NAME = a.out

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
		@echo "$(GREEN)Farm it´s open:$(NORMAL)"

all: $(NAME)

clean:
		$(RM) $(OBJS)
		@echo "$(RED)Farm it´s closed!$(NORMAL)"

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
