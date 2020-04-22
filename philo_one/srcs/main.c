/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:58:53 by xinu              #+#    #+#             */
/*   Updated: 2020/04/21 23:02:00 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

#include <pthread.h>

int	main(int aa __attribute__((unused)), char **args __attribute__((unused)))
{
	__attribute__((unused)) int				i;
	__attribute__((unused)) t_context		context;
	__attribute__((unused)) t_philosopher	**philosopher_arr;
	__attribute__((unused)) pthread_t		*threads;

	i = 0;
	errno = 0;
	get_context(&context, args);
	// pthread_mutex_init(context.waiter_mutex, NULL);
	threads = malloc(sizeof(*threads) * (context.philo_total));
	philosopher_arr = malloc(sizeof(*philosopher_arr) * (context.philo_total));
	while (i < context.philo_total)
	{
		philosopher_arr[i] = malloc(sizeof(**philosopher_arr));
		philosopher_arr[i]->id = i;
		philosopher_arr[i]->isalive = 1;
		philosopher_arr[i]->event = E_NONE;
		philosopher_arr[i]->state = E_NONE;
		pthread_create(&threads[i], NULL, philo_start_routine, (void*[2]){&context, &philosopher_arr[i]});
		printf("Created Thread\n");
		i++;
	}

	i = 0;
	while (i < context.philo_total)
	{
		pthread_join(threads[i], NULL);
		i++;
	}
	// philo_start_routine((void*[2]){(void *) &context, (void *)a});

	// if (errno == 0)
	// {
	// 	//initialize and then run in p_threads
	// }
	return (0);
}
