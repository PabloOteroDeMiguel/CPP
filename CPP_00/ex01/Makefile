# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: potero <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 09:40:47 by potero            #+#    #+#              #
#    Updated: 2022/08/16 09:41:04 by potero           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 

OBJS = $(SRCS:.cpp=.o)

NAME = 

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
