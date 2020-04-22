/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 23:27:27 by xinu              #+#    #+#             */
/*   Updated: 2020/04/21 22:51:41 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

	// pthread_t	thread_id[10];
	// size_t		i;

	// pthread_create(&thread_id[0], NULL, &color_pixel, (void*[4]){PARAMS(0)});
	// pthread_create(&thread_id[1], NULL, &color_pixel, (void*[4]){PARAMS(100)});
	// pthread_create(&thread_id[2], NULL, &color_pixel, (void*[4]){PARAMS(200)});
	// pthread_create(&thread_id[3], NULL, &color_pixel, (void*[4]){PARAMS(300)});
	// pthread_create(&thread_id[4], NULL, &color_pixel, (void*[4]){PARAMS(400)});
	// pthread_create(&thread_id[5], NULL, &color_pixel, (void*[4]){PARAMS(500)});
	// pthread_create(&thread_id[6], NULL, &color_pixel, (void*[4]){PARAMS(600)});
	// pthread_create(&thread_id[7], NULL, &color_pixel, (void*[4]){PARAMS(700)});
	// pthread_create(&thread_id[8], NULL, &color_pixel, (void*[4]){PARAMS(800)});
	// pthread_create(&thread_id[9], NULL, &color_pixel, (void*[4]){PARAMS(900)});
	// i = 0;
	// while (i < 10)
	// {
	// 	pthread_join(thread_id[i], NULL);
	// 	i++;
	// }

#define GET_FORKS 0
#define GIVE_FORKS 1

int		waiter(int request, t_philosopher *philosopher)
{
	int		result;

	printf("Request\n");

	//stuff
	result = 1;
	(void)request;
	(void)philosopher;
	return (result);
}

void	*philo_start_routine(void *arg)
{
	int				success;
	t_context		*context;
	t_philosopher	*philosopher;
	void			**params;

	params = arg;

	context = params[0];
	philosopher = params[1];
	//some mutex stuff happens here
	print_context(context);

	printf("\nALIVE: %d\n", philosopher->isalive);

	while (philosopher->isalive == 1)
	{
		pthread_mutex_lock(context->waiter_mutex);
		success = waiter(GET_FORKS, philosopher);
		pthread_mutex_unlock(context->waiter_mutex);
		if (success == 1)
		{
			philo_eat(context, philosopher);
			waiter(GIVE_FORKS, philosopher);
			philo_sleep(context, philosopher);
		}
		else
			philo_think(context, philosopher);
	}
	return (NULL);
}
