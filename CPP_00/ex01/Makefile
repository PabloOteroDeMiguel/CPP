# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: potero <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 09:40:47 by potero            #+#    #+#              #
#    Updated: 2022/10/20 12:28:13 by potero           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = bananaphone.cpp phonebook.cpp contacts.cpp add.cpp search.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = bananaphone 

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
		@echo "$(GREEN) Phonebook ready to use $(NORMAL)"

all: $(NAME)

clean:
		$(RM) $(OBJS)
		@echo "$(RED)Phonebook closed$(NORMAL)"

fclean: clean
		$(RM) $(NAME)
		@echo "$(RED)Phonebook closed$(NORMAL)"

re: fclean $(NAME)

.PHONY: all clean fclean re
