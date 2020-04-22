/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher_actions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 23:04:46 by xinu              #+#    #+#             */
/*   Updated: 2020/04/20 14:57:07 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	philo_grab(t_context *context, t_philosopher *philosopher)
{
	philo_announce(E_FORK, philosopher->id);
	(void)context;
}

void	philo_eat(t_context *context, t_philosopher *philosopher)
{
	long long	microsecs;

	philosopher->state = E_EATS;
	philo_announce(E_EATS, philosopher->id);
	microsecs = context->eat_time * 1000;
	usleep(microsecs);
}

void	philo_sleep(t_context *context, t_philosopher *philosopher)
{
	long long	microsecs;

	philosopher->state = E_THIN;
	philo_announce(E_SLEE, philosopher->id);
	microsecs = context->sleep_time * 1000;
	usleep(microsecs);
}

void	philo_think(t_context *context, t_philosopher *philosopher)
{
	if (philosopher->state != E_THIN)
	{
		philo_announce(E_THIN, philosopher->id);
		philosopher->state = E_THIN;
	}
	(void)context;
}

void	philo_die(t_context *context, t_philosopher *philosopher)
{
	philo_announce(E_DIED, philosopher->id);
	philosopher->state = E_DIED;
	philosopher->isalive = 0;
	(void)context;
}
