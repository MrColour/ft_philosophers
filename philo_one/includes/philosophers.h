/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:25:31 by xinu              #+#    #+#             */
/*   Updated: 2020/04/18 01:39:29 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERs_H
# define PHILOSOPHERs_H

/*
** -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-
** HEADERS
*/

# include <stdlib.h>
# include <pthread.h>
# include <sys/time.h>
# include <errno.h>

# include <unistd.h>

# include <stdio.h>

# include "philosopher_structs.h"
# include "color.h"

/*
** -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-
** FILE: utils.c
*/

size_t		at_strncpy(char *dest, char *src, size_t len);
long long	tvto_microsec(struct timeval *event);
size_t		llto_ad(long long num, char *dest);
long long	philo_atoll(char *str);

/*
** -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-
** FILE: program_input.c
*/

void		get_context(t_context *context, char **args);

/*
** -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-
** FILE: program_output.c
*/

void		philo_announce(int event_type, int philo_id);
size_t		eto_ad(int event, char *dest);

/*
** -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-
** FILE: debug.c
*/

void		print_context(t_context *context);

/*
** -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-
** FILE: debug.c
*/

void	philo_eat(t_context *context, t_philosopher *philosopher);
void	philo_sleep(t_context *context, t_philosopher *philosopher);

#endif
