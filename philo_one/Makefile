# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/14 11:56:03 by xinu              #+#    #+#              #
#    Updated: 2020/04/14 12:02:07 by xinu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo_one
FLAGS = -Wall -Werror -Wexta


FILES = \
	main \

SRCS = $(addprefix srcs/, $(addsuffix .c, $(FILES)))
OBJS = $(addsuffix .o, $(FILES))

all: $(OBJS)

$(OBJS):
	gcc $(FLAGS) -c $(OBJS)
