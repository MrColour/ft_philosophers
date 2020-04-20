/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 22:54:59 by xinu              #+#    #+#             */
/*   Updated: 2020/04/20 02:23:58 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	print_context(t_context *context)
{
	printf("Total Philosophers: %d\n", context->philo_total);
	printf("Die Threshold: %lld\n", context->time_to_die);
	printf("Eat  Time:     %lld\n", context->eat_time);
	printf("Sleep Time:    %lld\n", context->sleep_time);
	printf("End type: %d\n", context->must_eat);
}


