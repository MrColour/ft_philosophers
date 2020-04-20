/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher_actions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 23:04:46 by xinu              #+#    #+#             */
/*   Updated: 2020/04/18 23:45:47 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	philo_grab(t_context *context, t_philosopher *philosopher)
{
	philo_announce(E_FORK, philosopher->id);
}

void	philo_eat(t_context *context, t_philosopher *philosopher)
{
	long long	microsecs;

	philo_announce(E_EATS, philosopher->id);
	microsecs = context->eat_time * 1000;
	usleep(microsecs);
}

void	philo_sleep(t_context *context, t_philosopher *philosopher)
{
	long long	microsecs;

	philo_announce(E_SLEE, philosopher->id);
	microsecs = context->eat_time * 1000;
	usleep(microsecs);
}

void	philo_think(t_context *context, t_philosopher *philosopher)
{
	long long	microsecs;

	philo_announce(E_THIN, philosopher->id);
	microsecs = context->eat_time * 1000;
	usleep(microsecs);
}

void	philo_die(t_context *context, t_philosopher *philosopher)
{
	philo_announce(E_DIED, philosopher->id);
}
