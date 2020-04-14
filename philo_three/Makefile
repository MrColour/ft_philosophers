# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/14 11:56:03 by xinu              #+#    #+#              #
#    Updated: 2020/04/14 12:19:55 by xinu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo_three

INC = -I includes/
FLAGS = -Wall -Werror -Wextra


FILES = \
	main \

SRCS = $(addprefix srcs/, $(addsuffix .c, $(FILES)))
OBJS = $(addsuffix .o, $(FILES))

all: $(OBJS)
	gcc $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS):
	gcc $(FLAGS) -c $(SRCS) $(INC)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: re
	clear
	./$(NAME)

save: fclean
	git add .
	git commit -m "$(MSG)"
	git push
