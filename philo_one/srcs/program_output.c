/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_output.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 23:11:09 by xinu              #+#    #+#             */
/*   Updated: 2020/04/18 01:07:16 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

size_t	eto_ad(int event, char *dest)
{
	size_t	len;

	if (event == E_FORK)
		len = at_strncpy(dest, " has taken a fork\n", 18);
	else if (event == E_EATS)
		len = at_strncpy(dest, " is eating\n", 11);
	else if (event == E_SLEE)
		len = at_strncpy(dest, " is sleeping\n", 13);
	else if (event == E_THIN)
		len = at_strncpy(dest, " is thinking\n", 13);
	else if (event == E_DIED)
		len = at_strncpy(dest, " died\n", 5);
	else
		len = at_strncpy(dest, " ["RED"ERROR"ANSI_RESET"]!\n", 19);
	return (len);
}

void	philo_announce(int event_type, int philo_id)
{
	size_t			at;
	char			buff[100];
	long long		micro_sec;
	struct timeval	curr_time;

	gettimeofday(&curr_time, NULL);
	micro_sec = tvto_microsec(&curr_time);

	at = llto_ad(micro_sec, buff);
	buff[at++] = ' ';
	at += llto_ad(philo_id, &buff[at]);
	at += eto_ad(event_type, &buff[at]);

	write(1, buff, at);
}
