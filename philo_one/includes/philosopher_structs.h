/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher_structs.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:24:55 by xinu              #+#    #+#             */
/*   Updated: 2020/04/21 21:51:32 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_STRUCTS_H
# define PHILOSOPHER_STRUCTS_H

enum	e_events
{
	E_FORK = 0b00001,
	E_EATS = 0b00010,
	E_SLEE = 0b00100,
	E_THIN = 0b01000,
	E_DIED = 0b10000,
	E_NONE = 0b00000
};

typedef struct	s_context
{
	int				philo_total;
	long long		time_to_die;
	long long		eat_time;
	long long		sleep_time;
	int				must_eat;
	pthread_mutex_t	*waiter_mutex;
}				t_context;

typedef struct	s_philosopher
{
	int			id;
	int			event;
	int			isalive;
	int			state;
}				t_philosopher;

#endif
