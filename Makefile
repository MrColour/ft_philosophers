# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/14 11:55:17 by xinu              #+#    #+#              #
#    Updated: 2020/04/14 12:17:37 by xinu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

save:
	make -C philo_one/ fclean
	make -C philo_two/ fclean
	make -C philo_three/ fclean
	git add .
	git commit -m "$(MSG)"
	git push
