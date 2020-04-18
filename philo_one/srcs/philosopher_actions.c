/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher_actions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 23:04:46 by xinu              #+#    #+#             */
/*   Updated: 2020/04/18 01:08:28 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	philo_eat(t_context *context, t_philosopher *philosopher)
{
	usleep(context->eat_time);
	philo_announce(E_EATS, philosopher->id);
}

void	philo_sleep(t_context *context, t_philosopher *philosopher)
{
	usleep(context->sleep_time);
	philo_announce(E_EATS, philosopher->id);
}
