/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 23:27:27 by xinu              #+#    #+#             */
/*   Updated: 2020/04/19 23:34:00 by xinu             ###   ########.fr       */
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

void	philo_start_routine(void *arg)
{
	t_philosopher *philosopher;

	philosopher = &arg[0];
	while (philosopher->isalive == 1)
	{

	}
}
