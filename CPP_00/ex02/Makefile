# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: potero <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:32:18 by potero            #+#    #+#              #
#    Updated: 2022/10/21 13:54:15 by potero           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Account.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = acc

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

 %.o:%.cpp
		$(CC) $(CFLAGS) -c  $< -o $(<:.cpp=.o)

RM = rm -f

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
