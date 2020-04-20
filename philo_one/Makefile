# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/14 11:56:03 by xinu              #+#    #+#              #
#    Updated: 2020/04/20 02:28:58 by xinu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo_one

INC = -I includes/
FLAGS = -Wall -Werror -Wextra


FILES = \
	core \
	debug \
	main \
	philosopher_actions \
	program_input \
	program_output \
	utils \

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

quick: re
	clear
	./$(NAME) 1 1000000 1000 2000

save: fclean
	git add .
	git commit -m "$(MSG)"
	git push
