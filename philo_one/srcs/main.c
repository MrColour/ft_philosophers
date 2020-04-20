/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:58:53 by xinu              #+#    #+#             */
/*   Updated: 2020/04/18 23:32:35 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int aa __attribute__((unused)), char **args __attribute__((unused)))
{
	t_context		context;
	t_philosopher	*a;

	errno = 0;
	get_context(&context, args);

	a = malloc(sizeof(*a));
	a->id = 10;

	philo_eat(&context, a);
	// if (errno == 0)
	// {
	// 	//initialize and then run in p_threads
	// }
	return (0);
}
