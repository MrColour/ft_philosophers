/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 23:27:27 by xinu              #+#    #+#             */
/*   Updated: 2020/04/24 01:23:55 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

#define GET_FORKS 0
#define GIVE_FORKS 1

/*
** When request == GET_FORKS the code
** assumes a mutex has been done on context->waiter_mutex;
** This works because you can't get the forks if they are in use.
** So it is sequentially impossible to GET_FORKS and then another
** pthread change their state to CLEAN.
**
** The other pthread MUST first execute the GIVE_FORKS condition
** in order for the GET_FORKS condition to change the fork state.
*/

int		waiter(int request, t_philosopher *philosopher)
{
	int			result;
	t_context	*context;

	result = 0;
	context = philosopher->context;
	if (request == GET_FORKS)
	{
		// printf("FORKS: %d and %d this guy: %d\n",	philosopher->left_fork_id,
													// philosopher->right_fork_id,
													// philosopher->id);
		if (*(philosopher->left_fork) == CLEAN && *(philosopher->right_fork) == CLEAN)
		{
			*(philosopher->left_fork) = IN_USE;
			*(philosopher->right_fork) = IN_USE;
			result = 1;
		}
	}
	if (request == GIVE_FORKS)
	{
		*(philosopher->left_fork) = CLEAN;
		*(philosopher->right_fork) = CLEAN;
	}
	(void)request;
	(void)philosopher;
	return (result);
}

void	*philo_start_routine(void *philo_ptr)
{
	int				success;
	t_context		*context;
	t_philosopher	*philosopher;

	philosopher = philo_ptr;
	context = philosopher->context;
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
