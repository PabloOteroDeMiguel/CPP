# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: potero-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 17:12:08 by potero-d          #+#    #+#              #
#    Updated: 2023/01/10 18:32:40 by potero           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp generate.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = serialize

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wpedantic -Wno-c++0x-compat #-std=c++98 -pedantic

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
