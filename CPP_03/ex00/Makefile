# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: potero-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 10:37:46 by potero-d          #+#    #+#              #
#    Updated: 2022/11/09 10:32:58 by potero-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Fixed.cpp Point.cpp bsp.cpp

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

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
