/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:58:53 by xinu              #+#    #+#             */
/*   Updated: 2020/04/24 01:12:28 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

#include <pthread.h>

int	main(int aa __attribute__((unused)), char **args __attribute__((unused)))
{
	int				i;
	t_context		context;
	t_philosopher	**philosopher_arr;
	pthread_t		*threads;

	i = 0;
	errno = 0;
	get_context(&context, args);
	pthread_mutex_init(context.waiter_mutex, NULL);
	threads = malloc(sizeof(*threads) * (context.philo_total));
	philosopher_arr = malloc(sizeof(*philosopher_arr) * (context.philo_total));
	while (i < context.philo_total)
	{
		philosopher_arr[i] = malloc(sizeof(**philosopher_arr));
		philosopher_arr[i]->id = i;
		philosopher_arr[i]->isalive = 1;
		philosopher_arr[i]->event = E_NONE;
		philosopher_arr[i]->state = E_NONE;
		philosopher_arr[i]->context = &context;
		philosopher_arr[i]->left_fork = &(context.forks[i]);
		philosopher_arr[i]->right_fork = &(context.forks[(i + 1) % context.philo_total]);
		pthread_create(&threads[i], NULL, philo_start_routine, philosopher_arr[i]);
		i++;
	}

	i = 0;
	while (i < context.philo_total)
	{
		pthread_join(threads[i], NULL);
		i++;
	}
	return (0);
}
