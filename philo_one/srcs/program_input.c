/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 14:09:19 by xinu              #+#    #+#             */
/*   Updated: 2020/04/23 23:27:02 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	get_total_philo(char *str)
{
	int	result;

	if (str == NULL)
	{
		errno = EINVAL;
		return (-1);
	}
	result = philo_atoll(str);
	return (result);
}

int	get_time_to_die(char *str)
{
	long long	result;

	if (str == NULL)
	{
		errno = EINVAL;
		return (-1);
	}
	result = philo_atoll(str);
	return (result);
}

int	get_eat_time(char *str)
{
	long long	result;

	if (str == NULL)
	{
		errno = EINVAL;
		return (-1);
	}
	result = philo_atoll(str);
	return (result);
}

int	get_sleep_time(char *str)
{
	long long	result;

	if (str == NULL)
	{
		errno = EINVAL;
		return (-1);
	}
	result = philo_atoll(str);
	return (result);
}

int	get_must_eat(char *str)
{
	int	result;

	if (str == NULL)
	{
		errno = EINVAL;
		return (-1);
	}
	result = philo_atoll(str);
	return (result);
}

int	*get_forks(int total_philosophers)
{
	int	i;
	int	*forks;

	i = 0;
	forks = malloc(sizeof(*forks));
	while (i < total_philosophers)
	{
		forks[i] = CLEAN;
		i++;
	}
	return (forks);
}

void	get_context(t_context *context, char **args)
{
	errno = 0;
	context->waiter_mutex = malloc(sizeof(*(context->waiter_mutex)));
	if (errno == 0)
		context->philo_total =	get_total_philo(args[1]);
	context->forks = get_forks(context->philo_total);
	if (errno == 0)
		context->time_to_die =	get_time_to_die(args[2]);
	if (errno == 0)
		context->eat_time =		get_eat_time(args[3]);
	if (errno == 0)
		context->sleep_time =	get_sleep_time(args[4]);
	if (errno == 0)
		context->must_eat =		get_must_eat(args[5]);
}

